
/* =========================================================
 *                      Includes
 * =========================================================*/
 
 #include "EXTI_int.h"
 #include "EXTI_prv.h"
 #include "EXTI_cfg.h"


/* =========================================================
 *                  Helper Function
 * =========================================================*/



void Disable_ALL_EXTI(void){
    EXTI->IMR   = EXTI_RESET_VALUE_IMR;                     // Disable all EXTI lines
    EXTI->EMR   = EXTI_RESET_VALUE_EMR;                     // Disable all event lines
    EXTI->RTSR  = EXTI_RESET_VALUE_RTSR;                    // Disable rising trigger for all lines
    EXTI->FTSR  = EXTI_RESET_VALUE_FTSR;                    // Disable falling trigger for all lines
    EXTI->SWIER = EXTI_RESET_VALUE_SWIER;                   // Disable software trigger for all lines
    EXTI->PR    = EXTI_RESET_VALUE_PR;                      // Clear all pending interrupts by writing 1s
}

 void init_exti(EXTI_config_t* config){
      // 1. init gpio pin as input floating
      GPIO_CONFIG GPIO_CFG;
      GPIO_CFG.port = config->EXTIx_Pxx.GPIO_Port;
      GPIO_CFG.pin = config->EXTIx_Pxx.GPIO_Pin;
      GPIO_CFG.mode = INPUT;
      GPIO_CFG.pull_updown = PULLUPDOWN_DEFAULT;
      GPIO_init(&GPIO_CFG);

      // 2. Configure the EXTI line based on the provided configuration
      SYSCFG_SetEXTI(config->EXTIx_Pxx.EXTI_Line, config->EXTIx_Pxx.GPIO_Port);

      // 3. Set up the trigger type (rising, falling, both) as per the configuration
      EXTI_update_trigger(config);

      // 4. Enable the EXTI line if specified in the configuration
      if(config->Enable)
      {
      set_bit(EXTI->IMR, config->EXTIx_Pxx.EXTI_Line);
      NVIC_IRQx_EXTIx_EN(config->EXTIx_Pxx.IVT_position);
	   }
	   else
      {
      clear_bit(EXTI->IMR, config->EXTIx_Pxx.EXTI_Line);
		NVIC_IRQx_EXTIx_DIS(config->EXTIx_Pxx.IVT_position);
	   }

      // 5. Register the callback function for the EXTI interrupt
      
 }

 /* =========================================================
 *                      APIs
 * =========================================================*/
 void EXTI_voidInit(EXTI_config_t* config){
    init_exti(config);
 }
 void EXTI_voidUpdate(EXTI_config_t* config){
    init_exti(config);
 }
 void EXTI_voidDeInit(void){
    Disable_ALL_EXTI();
    Disable_ALL_NVIC();
 }
 void EXTI_update_trigger(EXTI_config_t* config){
   // Clear them before set
   clear_bit(EXTI->RTSR, config->EXTIx_Pxx.EXTI_Line);
   clear_bit(EXTI->FTSR, config->EXTIx_Pxx.EXTI_Line);

	if(config->Trigger == EXTI_TRIGGER_RISING)
   {
      set_bit(EXTI->RTSR, config->EXTIx_Pxx.EXTI_Line);
	}
	else if(config->Trigger == EXTI_TRIGGER_FALLING)
   {
      set_bit(EXTI->FTSR, config->EXTIx_Pxx.EXTI_Line);
	}
	else if(config->Trigger == EXTI_TRIGGER_CHANGE)
   {
      set_bit(EXTI->RTSR, config->EXTIx_Pxx.EXTI_Line);
      set_bit(EXTI->FTSR, config->EXTIx_Pxx.EXTI_Line);
	}
 }

 /*
 * ===================================
 * 			 ISR  Functions
 * ===================================
 */