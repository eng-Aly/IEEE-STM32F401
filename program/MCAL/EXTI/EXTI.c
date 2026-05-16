
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

 /*
 * ===================================
 * 			 ISR  Functions
 * ===================================
 */