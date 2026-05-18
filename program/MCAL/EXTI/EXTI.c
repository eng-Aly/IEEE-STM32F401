
/* =========================================================
 *                      Includes
 * =========================================================*/
 
 #include "EXTI_int.h"
 #include "EXTI_prv.h"
 #include "EXTI_cfg.h"


 void (* g_irq_Callback[16])(void) = {NULL};

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

 void EXTI_init(EXTI_config_t* config){

      // 1. Configure the EXTI line based on the provided configuration
      SYSCFG_SetEXTI(config->EXTIx_Pxx.EXTI_Line, config->EXTIx_Pxx.GPIO_Port);

      // 2. Set up the trigger type (rising, falling, both) as per the configuration
      EXTI_update_trigger(config);

      // 3. Enable the EXTI line as specified in the configuration & NVIC
      if(config->Enable == EXTI_ENABLE)
      {
      set_bit(EXTI->IMR, config->EXTIx_Pxx.EXTI_Line);
      NVIC_IRQx_EXTIx_EN(config->EXTIx_Pxx.IVT_position);
	   }
	   else
      {
      clear_bit(EXTI->IMR, config->EXTIx_Pxx.EXTI_Line);
		NVIC_IRQx_EXTIx_DIS(config->EXTIx_Pxx.IVT_position);
	   }

      // 4. Register the callback function for the EXTI interrupt
      if (config->irq_Callback != NULL)
      {
         g_irq_Callback[config->EXTIx_Pxx.EXTI_Line] = config->irq_Callback;
      }

 }

 /* =========================================================
 *                      APIs
 * =========================================================*/
 void EXTI_voidInit(EXTI_config_t* config){
    EXTI_init(config);
 }
 void EXTI_voidUpdate(EXTI_config_t* config){
    EXTI_init(config);
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
 void EXTI0_IRQHandler(void){

   set_bit(EXTI->PR, EXTI0);
   if(g_irq_Callback[0] != NULL){
      g_irq_Callback[0]();
   }
 }

 void EXTI1_IRQHandler(void){
   
   set_bit(EXTI->PR, EXTI1);
   if(g_irq_Callback[1] != NULL){
      g_irq_Callback[1]();
   }
   
 }

 void EXTI2_IRQHandler(void){
   
   set_bit(EXTI->PR, EXTI2);
   if(g_irq_Callback[2] != NULL){
      g_irq_Callback[2]();
   }
 }

 void EXTI3_IRQHandler(void){
   
   set_bit(EXTI->PR, EXTI3);
   if(g_irq_Callback[3] != NULL){
      g_irq_Callback[3]();
   }
 }

 void EXTI4_IRQHandler(void){
   
   set_bit(EXTI->PR, EXTI4);
   if(g_irq_Callback[4] != NULL){
      g_irq_Callback[4]();
   }

 }

 void EXTI9_5_IRQHandler(void){
   
   if(get_bit(EXTI->PR, EXTI5)){set_bit(EXTI->PR, EXTI5); if(g_irq_Callback[5] != NULL) g_irq_Callback[5]();}
   if(get_bit(EXTI->PR, EXTI6)){set_bit(EXTI->PR, EXTI6); if(g_irq_Callback[6] != NULL) g_irq_Callback[6]();}
   if(get_bit(EXTI->PR, EXTI7)){set_bit(EXTI->PR, EXTI7); if(g_irq_Callback[7] != NULL) g_irq_Callback[7]();}
   if(get_bit(EXTI->PR, EXTI8)){set_bit(EXTI->PR, EXTI8); if(g_irq_Callback[8] != NULL) g_irq_Callback[8]();}
   if(get_bit(EXTI->PR, EXTI9)){set_bit(EXTI->PR, EXTI9); if(g_irq_Callback[9] != NULL) g_irq_Callback[9]();}
 }

 void EXTI15_10_IRQHandler(void){

   if(get_bit(EXTI->PR, EXTI10)){set_bit(EXTI->PR, EXTI10); if(g_irq_Callback[10] != NULL) g_irq_Callback[10]();}
   if(get_bit(EXTI->PR, EXTI11)){set_bit(EXTI->PR, EXTI11); if(g_irq_Callback[11] != NULL) g_irq_Callback[11]();}
   if(get_bit(EXTI->PR, EXTI12)){set_bit(EXTI->PR, EXTI12); if(g_irq_Callback[12] != NULL) g_irq_Callback[12]();}
   if(get_bit(EXTI->PR, EXTI13)){set_bit(EXTI->PR, EXTI13); if(g_irq_Callback[13] != NULL) g_irq_Callback[13]();}
   if(get_bit(EXTI->PR, EXTI14)){set_bit(EXTI->PR, EXTI14); if(g_irq_Callback[14] != NULL) g_irq_Callback[14]();}
   if(get_bit(EXTI->PR, EXTI15)){set_bit(EXTI->PR, EXTI15); if(g_irq_Callback[15] != NULL) g_irq_Callback[15]();}
 }
 
