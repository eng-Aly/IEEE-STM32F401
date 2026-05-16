#ifndef EXTI_CFG_H_
#define EXTI_CFG_H_

/* =========================================================
 *                      Includes
 * =========================================================*/

 #include "../../lib/STM32F401xC_OPTIONS.h"
 #include "../GPIO/GPIO_prv.h"
 #include "../GPIO/GPIO_cfg.h"
 #include "../NVIC/NVIC_cfg.h"

 
 /* =========================================================
 *                  User Configuration
 * =========================================================*/

 // reset values
#define EXTI_RESET_VALUE_IMR                      0x00000000
#define EXTI_RESET_VALUE_EMR                      0x00000000
#define EXTI_RESET_VALUE_RTSR                     0x00000000
#define EXTI_RESET_VALUE_FTSR                     0x00000000
#define EXTI_RESET_VALUE_SWIER                    0x00000000
#define EXTI_RESET_VALUE_PR                       0xFFFFFFFF 

// @ref Trigger Types
#define EXTI_TRIGGER_RISING	                    0
#define EXTI_TRIGGER_FALLING	                1
#define EXTI_TRIGGER_CHANGE	                    2

    // defalt state is rising edge
#define Trigger                                 EXTI_TRIGGER_RISING

// @ref Enable/Disable
#define EXTI_DISABLE			                0
#define EXTI_ENABLE			                    1

    // defalt state is enabled
#define Enable                                  EXTI_ENABLE

// @ref EXTI_Lines
 #define EXTI0					                0
 #define EXTI1					                1
 #define EXTI2					                2
 #define EXTI3					                3
 #define EXTI4					                4
 #define EXTI5					                5
 #define EXTI6					                6
 #define EXTI7					                7
 #define EXTI8					                8
 #define EXTI9					                9
 #define EXTI10					                10
 #define EXTI11					                11
 #define EXTI12					                12
 #define EXTI13					                13
 #define EXTI14					                14
 #define EXTI15					                15

 // @ref EXTIx_Pxx
 // EXTI0
 #define EXTI0_PA0                              (EXTI_mapping_t){EXTI0, GPIOA_STRUCT, PIN0, EXTI0_IVT_POS} 
 #define EXTI0_PB0                              (EXTI_mapping_t){EXTI0, GPIOB_STRUCT, PIN0, EXTI0_IVT_POS}
 #define EXTI0_PC0                              (EXTI_mapping_t){EXTI0, GPIOC_STRUCT, PIN0, EXTI0_IVT_POS}
 #define EXTI0_PD0                              (EXTI_mapping_t){EXTI0, GPIOD_STRUCT, PIN0, EXTI0_IVT_POS}
 #define EXTI0_PE0                              (EXTI_mapping_t){EXTI0, GPIOE_STRUCT, PIN0, EXTI0_IVT_POS}
 #define EXTI0_PH0                              (EXTI_mapping_t){EXTI0, GPIOH_STRUCT, PIN0, EXTI0_IVT_POS}
    
 // EXTI1   
 #define EXTI1_PA1                              (EXTI_mapping_t){EXTI1, GPIOA_STRUCT, PIN1, EXTI1_IVT_POS}  
 #define EXTI1_PB1                              (EXTI_mapping_t){EXTI1, GPIOB_STRUCT, PIN1, EXTI1_IVT_POS}
 #define EXTI1_PC1                              (EXTI_mapping_t){EXTI1, GPIOC_STRUCT, PIN1, EXTI1_IVT_POS}
 #define EXTI1_PD1                              (EXTI_mapping_t){EXTI1, GPIOD_STRUCT, PIN1, EXTI1_IVT_POS}
 #define EXTI1_PE1                              (EXTI_mapping_t){EXTI1, GPIOE_STRUCT, PIN1, EXTI1_IVT_POS}
 #define EXTI1_PH1                              (EXTI_mapping_t){EXTI1, GPIOH_STRUCT, PIN1, EXTI1_IVT_POS}

 // EXTI2   
 #define EXTI2_PA2                              (EXTI_mapping_t){EXTI2, GPIOA_STRUCT, PIN2, EXTI2_IVT_POS}
 #define EXTI2_PB2                              (EXTI_mapping_t){EXTI2, GPIOB_STRUCT, PIN2, EXTI2_IVT_POS}
 #define EXTI2_PC2                              (EXTI_mapping_t){EXTI2, GPIOC_STRUCT, PIN2, EXTI2_IVT_POS}
 #define EXTI2_PD2                              (EXTI_mapping_t){EXTI2, GPIOD_STRUCT, PIN2, EXTI2_IVT_POS}
 #define EXTI2_PE2                              (EXTI_mapping_t){EXTI2, GPIOE_STRUCT, PIN2, EXTI2_IVT_POS}
 #define EXTI2_PH2                              (EXTI_mapping_t){EXTI2, GPIOH_STRUCT, PIN2, EXTI2_IVT_POS}

 // EXTI3   
 #define EXTI3_PA3                              (EXTI_mapping_t){EXTI3, GPIOA_STRUCT, PIN3, EXTI3_IVT_POS}
 #define EXTI3_PB3                              (EXTI_mapping_t){EXTI3, GPIOB_STRUCT, PIN3, EXTI3_IVT_POS}
 #define EXTI3_PC3                              (EXTI_mapping_t){EXTI3, GPIOC_STRUCT, PIN3, EXTI3_IVT_POS}
 #define EXTI3_PD3                              (EXTI_mapping_t){EXTI3, GPIOD_STRUCT, PIN3, EXTI3_IVT_POS}
 #define EXTI3_PE3                              (EXTI_mapping_t){EXTI3, GPIOE_STRUCT, PIN3, EXTI3_IVT_POS}
 #define EXTI3_PH3                              (EXTI_mapping_t){EXTI3, GPIOH_STRUCT, PIN3, EXTI3_IVT_POS}

 // EXTI4   
 #define EXTI4_PA4                              (EXTI_mapping_t){EXTI4, GPIOA_STRUCT, PIN4, EXTI4_IVT_POS}
 #define EXTI4_PB4                              (EXTI_mapping_t){EXTI4, GPIOB_STRUCT, PIN4, EXTI4_IVT_POS}
 #define EXTI4_PC4                              (EXTI_mapping_t){EXTI4, GPIOC_STRUCT, PIN4, EXTI4_IVT_POS}
 #define EXTI4_PD4                              (EXTI_mapping_t){EXTI4, GPIOD_STRUCT, PIN4, EXTI4_IVT_POS}
 #define EXTI4_PE4                              (EXTI_mapping_t){EXTI4, GPIOE_STRUCT, PIN4, EXTI4_IVT_POS}
 #define EXTI4_PH4                              (EXTI_mapping_t){EXTI4, GPIOH_STRUCT, PIN4, EXTI4_IVT_POS}

 // EXTI5   
 #define EXTI5_PA5                              (EXTI_mapping_t){EXTI5, GPIOA_STRUCT, PIN5, EXTI5_9_IVT_POS}
 #define EXTI5_PB5                              (EXTI_mapping_t){EXTI5, GPIOB_STRUCT, PIN5, EXTI5_9_IVT_POS}
 #define EXTI5_PC5                              (EXTI_mapping_t){EXTI5, GPIOC_STRUCT, PIN5, EXTI5_9_IVT_POS}
 #define EXTI5_PD5                              (EXTI_mapping_t){EXTI5, GPIOD_STRUCT, PIN5, EXTI5_9_IVT_POS}
 #define EXTI5_PE5                              (EXTI_mapping_t){EXTI5, GPIOE_STRUCT, PIN5, EXTI5_9_IVT_POS}
 #define EXTI5_PH5                              (EXTI_mapping_t){EXTI5, GPIOH_STRUCT, PIN5, EXTI5_9_IVT_POS}

 // EXTI6   
 #define EXTI6_PA6                              (EXTI_mapping_t){EXTI6, GPIOA_STRUCT, PIN6, EXTI5_9_IVT_POS}
 #define EXTI6_PB6                              (EXTI_mapping_t){EXTI6, GPIOB_STRUCT, PIN6, EXTI5_9_IVT_POS}
 #define EXTI6_PC6                              (EXTI_mapping_t){EXTI6, GPIOC_STRUCT, PIN6, EXTI5_9_IVT_POS}
 #define EXTI6_PD6                              (EXTI_mapping_t){EXTI6, GPIOD_STRUCT, PIN6, EXTI5_9_IVT_POS}
 #define EXTI6_PE6                              (EXTI_mapping_t){EXTI6, GPIOE_STRUCT, PIN6, EXTI5_9_IVT_POS}
 #define EXTI6_PH6                              (EXTI_mapping_t){EXTI6, GPIOH_STRUCT, PIN6, EXTI5_9_IVT_POS}

 // EXTI7   
 #define EXTI7_PA7                              (EXTI_mapping_t){EXTI7, GPIOA_STRUCT, PIN7, EXTI5_9_IVT_POS}
 #define EXTI7_PB7                              (EXTI_mapping_t){EXTI7, GPIOB_STRUCT, PIN7, EXTI5_9_IVT_POS}
 #define EXTI7_PC7                              (EXTI_mapping_t){EXTI7, GPIOC_STRUCT, PIN7, EXTI5_9_IVT_POS}
 #define EXTI7_PD7                              (EXTI_mapping_t){EXTI7, GPIOD_STRUCT, PIN7, EXTI5_9_IVT_POS}
 #define EXTI7_PE7                              (EXTI_mapping_t){EXTI7, GPIOE_STRUCT, PIN7, EXTI5_9_IVT_POS}
 #define EXTI7_PH7                              (EXTI_mapping_t){EXTI7, GPIOH_STRUCT, PIN7, EXTI5_9_IVT_POS}

 // EXTI8   
 #define EXTI8_PA8                              (EXTI_mapping_t){EXTI8, GPIOA_STRUCT, PIN8, EXTI5_9_IVT_POS}
 #define EXTI8_PB8                              (EXTI_mapping_t){EXTI8, GPIOB_STRUCT, PIN8, EXTI5_9_IVT_POS}
 #define EXTI8_PC8                              (EXTI_mapping_t){EXTI8, GPIOC_STRUCT, PIN8, EXTI5_9_IVT_POS}
 #define EXTI8_PD8                              (EXTI_mapping_t){EXTI8, GPIOD_STRUCT, PIN8, EXTI5_9_IVT_POS}
 #define EXTI8_PE8                              (EXTI_mapping_t){EXTI8, GPIOE_STRUCT, PIN8, EXTI5_9_IVT_POS}
 #define EXTI8_PH8                              (EXTI_mapping_t){EXTI8, GPIOH_STRUCT, PIN8, EXTI5_9_IVT_POS}

 // EXTI9   
 #define EXTI9_PA9                              (EXTI_mapping_t){EXTI9, GPIOA_STRUCT, PIN9, EXTI5_9_IVT_POS}
 #define EXTI9_PB9                              (EXTI_mapping_t){EXTI9, GPIOB_STRUCT, PIN9, EXTI5_9_IVT_POS}
 #define EXTI9_PC9                              (EXTI_mapping_t){EXTI9, GPIOC_STRUCT, PIN9, EXTI5_9_IVT_POS}
 #define EXTI9_PD9                              (EXTI_mapping_t){EXTI9, GPIOD_STRUCT, PIN9, EXTI5_9_IVT_POS}
 #define EXTI9_PE9                              (EXTI_mapping_t){EXTI9, GPIOE_STRUCT, PIN9, EXTI5_9_IVT_POS}
 #define EXTI9_PH9                              (EXTI_mapping_t){EXTI9, GPIOH_STRUCT, PIN9, EXTI5_9_IVT_POS}

 // EXTI10  
 #define EXTI10_PA10                            (EXTI_mapping_t){EXTI10, GPIOA_STRUCT, PIN10, EXTI10_15_IVT_POS}
 #define EXTI10_PB10                            (EXTI_mapping_t){EXTI10, GPIOB_STRUCT, PIN10, EXTI10_15_IVT_POS}
 #define EXTI10_PC10                            (EXTI_mapping_t){EXTI10, GPIOC_STRUCT, PIN10, EXTI10_15_IVT_POS}
 #define EXTI10_PD10                            (EXTI_mapping_t){EXTI10, GPIOD_STRUCT, PIN10, EXTI10_15_IVT_POS}
 #define EXTI10_PE10                            (EXTI_mapping_t){EXTI10, GPIOE_STRUCT, PIN10, EXTI10_15_IVT_POS}
 #define EXTI10_PH10                            (EXTI_mapping_t){EXTI10, GPIOH_STRUCT, PIN10, EXTI10_15_IVT_POS}

 // EXTI11  
 #define EXTI11_PA11                            (EXTI_mapping_t){EXTI11, GPIOA_STRUCT, PIN11, EXTI10_15_IVT_POS}
 #define EXTI11_PB11                            (EXTI_mapping_t){EXTI11, GPIOB_STRUCT, PIN11, EXTI10_15_IVT_POS}
 #define EXTI11_PC11                            (EXTI_mapping_t){EXTI11, GPIOC_STRUCT, PIN11, EXTI10_15_IVT_POS}
 #define EXTI11_PD11                            (EXTI_mapping_t){EXTI11, GPIOD_STRUCT, PIN11, EXTI10_15_IVT_POS}
 #define EXTI11_PE11                            (EXTI_mapping_t){EXTI11, GPIOE_STRUCT, PIN11, EXTI10_15_IVT_POS}
 #define EXTI11_PH11                            (EXTI_mapping_t){EXTI11, GPIOH_STRUCT, PIN11, EXTI10_15_IVT_POS}

 // EXTI14  
 #define EXTI14_PA14                            (EXTI_mapping_t){EXTI14, GPIOA_STRUCT, PIN14, EXTI10_15_IVT_POS}
 #define EXTI14_PB14                            (EXTI_mapping_t){EXTI14, GPIOB_STRUCT, PIN14, EXTI10_15_IVT_POS}
 #define EXTI14_PC14                            (EXTI_mapping_t){EXTI14, GPIOC_STRUCT, PIN14, EXTI10_15_IVT_POS}
 #define EXTI14_PD14                            (EXTI_mapping_t){EXTI14, GPIOD_STRUCT, PIN14, EXTI10_15_IVT_POS}
 #define EXTI14_PE14                            (EXTI_mapping_t){EXTI14, GPIOE_STRUCT, PIN14, EXTI10_15_IVT_POS}
 #define EXTI14_PH14                            (EXTI_mapping_t){EXTI14, GPIOH_STRUCT, PIN14, EXTI10_15_IVT_POS}

 // EXTI15  
 #define EXTI15_PA15                            (EXTI_mapping_t){EXTI15, GPIOA_STRUCT, PIN15, EXTI10_15_IVT_POS}
 #define EXTI15_PB15                            (EXTI_mapping_t){EXTI15, GPIOB_STRUCT, PIN15, EXTI10_15_IVT_POS}
 #define EXTI15_PC15                            (EXTI_mapping_t){EXTI15, GPIOC_STRUCT, PIN15, EXTI10_15_IVT_POS}
 #define EXTI15_PD15                            (EXTI_mapping_t){EXTI15, GPIOD_STRUCT, PIN15, EXTI10_15_IVT_POS}
 #define EXTI15_PE15                            (EXTI_mapping_t){EXTI15, GPIOE_STRUCT, PIN15, EXTI10_15_IVT_POS}
 #define EXTI15_PH15                            (EXTI_mapping_t){EXTI15, GPIOH_STRUCT, PIN15, EXTI10_15_IVT_POS}


#endif /* EXTI_CFG_H_ */