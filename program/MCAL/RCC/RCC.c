#include "RCC.h"



RCC_ERRORS_RETURN MCAL_void_PLL_CLK_mode(PLL_MODES speed_mode);

void MCAL_void_RCC_CLK_HSE_ENB();
void MCAL_void_RCC_CLK_HSI_ENB();
void MCAL_void_RCC_CLK_PLL_ENB();

void MCAL_void_PLL_CLK_CONF(RCC_CLOCK_SRC pll_option);


RCC_ERRORS_RETURN MCAL_void_PLL_CLK_CONF_mul(u32 P , u8 M ,u32 N);


void MCAL_void_RCC_CLK_SRC(RCC_CLOCK_SRC clock_src){
    switch (clock_src)
    {
    case HSE:
        MCAL_void_RCC_CLK_HSE_ENB();
        break;
    case HSI:
        MCAL_void_RCC_CLK_HSI_ENB();
        break;
    case PLL:
       
        #ifdef PLL_SRC_HSE
        //hse set as a src here
        MCAL_void_PLL_CLK_CONF(HSE);
        // pll configuration method
        MCAL_void_PLL_CLK_mode(MAX_SPEED);
        
        #elif PLL_SRC_HSI
        //hsi set as a src here
        MCAL_void_PLL_CLK_CONF(HSI);
         // pll configuration method
        MCAL_void_PLL_CLK_mode(MAX_SPEED);
        #endif
        // pll enable method
        MCAL_void_RCC_CLK_PLL_ENB();
        break;    
    default:
        break;
    }
};

void MCAL_void_RCC_CLK_HSE_ENB(){
    set_bit(RCC_STRUCT->RCC_CR,16);
    while(!get_bit(RCC_STRUCT->RCC_CR,17));
};

void MCAL_void_RCC_CLK_HSI_ENB(){
    set_bit(RCC_STRUCT->RCC_CR,0);
    while(!get_bit(RCC_STRUCT->RCC_CR,1));
};

void MCAL_void_RCC_CLK_PLL_ENB(){
    set_bit(RCC_STRUCT->RCC_CR,24);
    while(!get_bit(RCC_STRUCT->RCC_CR,25));
};


void MCAL_void_PLL_CLK_CONF_SRC(RCC_CLOCK_SRC pll_option){
    switch (pll_option)
    {
    case HSE:
        set_bit(RCC_STRUCT->RCC_PLLCFGR,22);
        break;
    case HSI:
        clear_bit(RCC_STRUCT->RCC_PLLCFGR,22);
        break;
    default:
        break;
    }
};

RCC_ERRORS_RETURN MCAL_void_PLL_CLK_CONF_mul(u32 P , u8 M ,u32 N){
    #ifdef PLL_SRC_HSE
    //16mhz  -> needs to be checked
    u32 PLL_INPUT_FREQ=16000000U;
    #elif  PLL_SRC_HSI
    //16mhz
    u32 PLL_INPUT_FREQ=16000000U;
    #endif
    if(N<192 || N>432 ){
        return N_WRONG_CONF;
    }
    if(M<2  || M>63){
        return M_WRONG_CONF;
    }
    u32 VCO_INPUT_FREQ=PLL_INPUT_FREQ/M;
    if(VCO_INPUT_FREQ > 2000000 || VCO_INPUT_FREQ < 1000000 ){
        return VCO_IN_NOT_IN_RANGE;
    }
    u32 VCO_OUTPUT_FREQ=VCO_INPUT_FREQ*N;
    if(VCO_OUTPUT_FREQ>432000000 || VCO_OUTPUT_FREQ < 192000000){
        return VCO_OUT_NOT_IN_RANGE;
    }
    u32 SYSTEM_CLOCK_IN=VCO_OUTPUT_FREQ/P;
    if (SYSTEM_CLOCK_IN > 84000000)
    {
        return SYSCLK_EXCEED_84;
    }
    RCC_STRUCT->RCC_PLLCFGR |= (M<<5);
    RCC_STRUCT->RCC_PLLCFGR |= (N<<6);
    switch (P)
    {
    case 2:
        clear_bit(RCC_STRUCT->RCC_PLLCFGR,16);
        clear_bit(RCC_STRUCT->RCC_PLLCFGR,17);
        break;
    case 4:
        set_bit(RCC_STRUCT->RCC_PLLCFGR,16);
        clear_bit(RCC_STRUCT->RCC_PLLCFGR,17);
        break;
    case 6:
        clear_bit(RCC_STRUCT->RCC_PLLCFGR,16);
        set_bit(RCC_STRUCT->RCC_PLLCFGR,17);
        break;
    case 8:
        set_bit(RCC_STRUCT->RCC_PLLCFGR,16);
        set_bit(RCC_STRUCT->RCC_PLLCFGR,17);
        break;
    default:
        return P_NOT_VALID;
        break;
    }
    return PLL_CFG_TRUE;
    
};

RCC_ERRORS_RETURN MCAL_void_PLL_CLK_mode(PLL_MODES speed_mode){
    switch (speed_mode)
    {
    // 84 max , low speed 24 mhz 
    case LOW_SPEED:
        return MCAL_void_PLL_CLK_CONF_mul(8,16,192);
        break;
    //medium speed 48 mhz    
    case MEDIUM_SPEED:
        return MCAL_void_PLL_CLK_CONF_mul(4,16,192);
        break;
    //high speed 64 mhz    
    case HIGH_SPEED:
        return MCAL_void_PLL_CLK_CONF_mul(4,16,256);
        break;
    // max speed 84 mhz    
    case MAX_SPEED:
        return MCAL_void_PLL_CLK_CONF_mul(4,16,336);    
        break;       
    default:
        return MCAL_void_PLL_CLK_CONF_mul(4,16,336);
        break;
    }

}

