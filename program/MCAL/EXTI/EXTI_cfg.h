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
#define EXTI_RESET_VALUE_IMR                    0x00000000
#define EXTI_RESET_VALUE_EMR                    0x00000000
#define EXTI_RESET_VALUE_RTSR                   0x00000000
#define EXTI_RESET_VALUE_FTSR                   0x00000000
#define EXTI_RESET_VALUE_SWIER                  0x00000000
#define EXTI_RESET_VALUE_PR                     0xFFFFFFFF 

// @ref Trigger Types
#define EXTI_TRIGGER_RISING	                    0
#define EXTI_TRIGGER_FALLING	                1
#define EXTI_TRIGGER_CHANGE	                    2

    // defalt state is rising edge
#define TRIGGER_DEFAULT                         EXTI_TRIGGER_RISING

// @ref Enable/Disable
#define EXTI_DISABLE			                0
#define EXTI_ENABLE			                    1

    // defalt state is enabled
#define ENABLE_DEFAULT                          EXTI_ENABLE

    // default pull up pull down state is no pull
#define PULLUPDOWN_DEFAULT                      NO_PULL


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
 #define EXTI0_PA0                              (EXTI_mapping_t){EXTI0, GPIOA, PIN0, EXTI0_IVT_POS} 
 #define EXTI0_PB0                              (EXTI_mapping_t){EXTI0, GPIOB, PIN0, EXTI0_IVT_POS}
 #define EXTI0_PC0                              (EXTI_mapping_t){EXTI0, GPIOC, PIN0, EXTI0_IVT_POS}
 #define EXTI0_PD0                              (EXTI_mapping_t){EXTI0, GPIOD, PIN0, EXTI0_IVT_POS}
 #define EXTI0_PE0                              (EXTI_mapping_t){EXTI0, GPIOE, PIN0, EXTI0_IVT_POS}
 #define EXTI0_PH0                              (EXTI_mapping_t){EXTI0, GPIOH, PIN0, EXTI0_IVT_POS}
    
 // EXTI1   
 #define EXTI1_PA1                              (EXTI_mapping_t){EXTI1, GPIOA, PIN1, EXTI1_IVT_POS}  
 #define EXTI1_PB1                              (EXTI_mapping_t){EXTI1, GPIOB, PIN1, EXTI1_IVT_POS}
 #define EXTI1_PC1                              (EXTI_mapping_t){EXTI1, GPIOC, PIN1, EXTI1_IVT_POS}
 #define EXTI1_PD1                              (EXTI_mapping_t){EXTI1, GPIOD, PIN1, EXTI1_IVT_POS}
 #define EXTI1_PE1                              (EXTI_mapping_t){EXTI1, GPIOE, PIN1, EXTI1_IVT_POS}
 #define EXTI1_PH1                              (EXTI_mapping_t){EXTI1, GPIOH, PIN1, EXTI1_IVT_POS}

 // EXTI2   
 #define EXTI2_PA2                              (EXTI_mapping_t){EXTI2, GPIOA, PIN2, EXTI2_IVT_POS}
 #define EXTI2_PB2                              (EXTI_mapping_t){EXTI2, GPIOB, PIN2, EXTI2_IVT_POS}
 #define EXTI2_PC2                              (EXTI_mapping_t){EXTI2, GPIOC, PIN2, EXTI2_IVT_POS}
 #define EXTI2_PD2                              (EXTI_mapping_t){EXTI2, GPIOD, PIN2, EXTI2_IVT_POS}
 #define EXTI2_PE2                              (EXTI_mapping_t){EXTI2, GPIOE, PIN2, EXTI2_IVT_POS}
 #define EXTI2_PH2                              (EXTI_mapping_t){EXTI2, GPIOH, PIN2, EXTI2_IVT_POS}

 // EXTI3   
 #define EXTI3_PA3                              (EXTI_mapping_t){EXTI3, GPIOA, PIN3, EXTI3_IVT_POS}
 #define EXTI3_PB3                              (EXTI_mapping_t){EXTI3, GPIOB, PIN3, EXTI3_IVT_POS}
 #define EXTI3_PC3                              (EXTI_mapping_t){EXTI3, GPIOC, PIN3, EXTI3_IVT_POS}
 #define EXTI3_PD3                              (EXTI_mapping_t){EXTI3, GPIOD, PIN3, EXTI3_IVT_POS}
 #define EXTI3_PE3                              (EXTI_mapping_t){EXTI3, GPIOE, PIN3, EXTI3_IVT_POS}
 #define EXTI3_PH3                              (EXTI_mapping_t){EXTI3, GPIOH, PIN3, EXTI3_IVT_POS}

 // EXTI4   
 #define EXTI4_PA4                              (EXTI_mapping_t){EXTI4, GPIOA, PIN4, EXTI4_IVT_POS}
 #define EXTI4_PB4                              (EXTI_mapping_t){EXTI4, GPIOB, PIN4, EXTI4_IVT_POS}
 #define EXTI4_PC4                              (EXTI_mapping_t){EXTI4, GPIOC, PIN4, EXTI4_IVT_POS}
 #define EXTI4_PD4                              (EXTI_mapping_t){EXTI4, GPIOD, PIN4, EXTI4_IVT_POS}
 #define EXTI4_PE4                              (EXTI_mapping_t){EXTI4, GPIOE, PIN4, EXTI4_IVT_POS}
 #define EXTI4_PH4                              (EXTI_mapping_t){EXTI4, GPIOH, PIN4, EXTI4_IVT_POS}

 // EXTI5   
 #define EXTI5_PA5                              (EXTI_mapping_t){EXTI5, GPIOA, PIN5, EXTI5_9_IVT_POS}
 #define EXTI5_PB5                              (EXTI_mapping_t){EXTI5, GPIOB, PIN5, EXTI5_9_IVT_POS}
 #define EXTI5_PC5                              (EXTI_mapping_t){EXTI5, GPIOC, PIN5, EXTI5_9_IVT_POS}
 #define EXTI5_PD5                              (EXTI_mapping_t){EXTI5, GPIOD, PIN5, EXTI5_9_IVT_POS}
 #define EXTI5_PE5                              (EXTI_mapping_t){EXTI5, GPIOE, PIN5, EXTI5_9_IVT_POS}
 #define EXTI5_PH5                              (EXTI_mapping_t){EXTI5, GPIOH, PIN5, EXTI5_9_IVT_POS}

 // EXTI6   
 #define EXTI6_PA6                              (EXTI_mapping_t){EXTI6, GPIOA, PIN6, EXTI5_9_IVT_POS}
 #define EXTI6_PB6                              (EXTI_mapping_t){EXTI6, GPIOB, PIN6, EXTI5_9_IVT_POS}
 #define EXTI6_PC6                              (EXTI_mapping_t){EXTI6, GPIOC, PIN6, EXTI5_9_IVT_POS}
 #define EXTI6_PD6                              (EXTI_mapping_t){EXTI6, GPIOD, PIN6, EXTI5_9_IVT_POS}
 #define EXTI6_PE6                              (EXTI_mapping_t){EXTI6, GPIOE, PIN6, EXTI5_9_IVT_POS}
 #define EXTI6_PH6                              (EXTI_mapping_t){EXTI6, GPIOH, PIN6, EXTI5_9_IVT_POS}

 // EXTI7   
 #define EXTI7_PA7                              (EXTI_mapping_t){EXTI7, GPIOA, PIN7, EXTI5_9_IVT_POS}
 #define EXTI7_PB7                              (EXTI_mapping_t){EXTI7, GPIOB, PIN7, EXTI5_9_IVT_POS}
 #define EXTI7_PC7                              (EXTI_mapping_t){EXTI7, GPIOC, PIN7, EXTI5_9_IVT_POS}
 #define EXTI7_PD7                              (EXTI_mapping_t){EXTI7, GPIOD, PIN7, EXTI5_9_IVT_POS}
 #define EXTI7_PE7                              (EXTI_mapping_t){EXTI7, GPIOE, PIN7, EXTI5_9_IVT_POS}
 #define EXTI7_PH7                              (EXTI_mapping_t){EXTI7, GPIOH, PIN7, EXTI5_9_IVT_POS}

 // EXTI8   
 #define EXTI8_PA8                              (EXTI_mapping_t){EXTI8, GPIOA, PIN8, EXTI5_9_IVT_POS}
 #define EXTI8_PB8                              (EXTI_mapping_t){EXTI8, GPIOB, PIN8, EXTI5_9_IVT_POS}
 #define EXTI8_PC8                              (EXTI_mapping_t){EXTI8, GPIOC, PIN8, EXTI5_9_IVT_POS}
 #define EXTI8_PD8                              (EXTI_mapping_t){EXTI8, GPIOD, PIN8, EXTI5_9_IVT_POS}
 #define EXTI8_PE8                              (EXTI_mapping_t){EXTI8, GPIOE, PIN8, EXTI5_9_IVT_POS}
 #define EXTI8_PH8                              (EXTI_mapping_t){EXTI8, GPIOH, PIN8, EXTI5_9_IVT_POS}

 // EXTI9   
 #define EXTI9_PA9                              (EXTI_mapping_t){EXTI9, GPIOA, PIN9, EXTI5_9_IVT_POS}
 #define EXTI9_PB9                              (EXTI_mapping_t){EXTI9, GPIOB, PIN9, EXTI5_9_IVT_POS}
 #define EXTI9_PC9                              (EXTI_mapping_t){EXTI9, GPIOC, PIN9, EXTI5_9_IVT_POS}
 #define EXTI9_PD9                              (EXTI_mapping_t){EXTI9, GPIOD, PIN9, EXTI5_9_IVT_POS}
 #define EXTI9_PE9                              (EXTI_mapping_t){EXTI9, GPIOE, PIN9, EXTI5_9_IVT_POS}
 #define EXTI9_PH9                              (EXTI_mapping_t){EXTI9, GPIOH, PIN9, EXTI5_9_IVT_POS}

 // EXTI10  
 #define EXTI10_PA10                            (EXTI_mapping_t){EXTI10, GPIOA, PIN10, EXTI10_15_IVT_POS}
 #define EXTI10_PB10                            (EXTI_mapping_t){EXTI10, GPIOB, PIN10, EXTI10_15_IVT_POS}
 #define EXTI10_PC10                            (EXTI_mapping_t){EXTI10, GPIOC, PIN10, EXTI10_15_IVT_POS}
 #define EXTI10_PD10                            (EXTI_mapping_t){EXTI10, GPIOD, PIN10, EXTI10_15_IVT_POS}
 #define EXTI10_PE10                            (EXTI_mapping_t){EXTI10, GPIOE, PIN10, EXTI10_15_IVT_POS}
 #define EXTI10_PH10                            (EXTI_mapping_t){EXTI10, GPIOH, PIN10, EXTI10_15_IVT_POS}

 // EXTI11  
 #define EXTI11_PA11                            (EXTI_mapping_t){EXTI11, GPIOA, PIN11, EXTI10_15_IVT_POS}
 #define EXTI11_PB11                            (EXTI_mapping_t){EXTI11, GPIOB, PIN11, EXTI10_15_IVT_POS}
 #define EXTI11_PC11                            (EXTI_mapping_t){EXTI11, GPIOC, PIN11, EXTI10_15_IVT_POS}
 #define EXTI11_PD11                            (EXTI_mapping_t){EXTI11, GPIOD, PIN11, EXTI10_15_IVT_POS}
 #define EXTI11_PE11                            (EXTI_mapping_t){EXTI11, GPIOE, PIN11, EXTI10_15_IVT_POS}
 #define EXTI11_PH11                            (EXTI_mapping_t){EXTI11, GPIOH, PIN11, EXTI10_15_IVT_POS}

 // EXTI14  
 #define EXTI14_PA14                            (EXTI_mapping_t){EXTI14, GPIOA, PIN14, EXTI10_15_IVT_POS}
 #define EXTI14_PB14                            (EXTI_mapping_t){EXTI14, GPIOB, PIN14, EXTI10_15_IVT_POS}
 #define EXTI14_PC14                            (EXTI_mapping_t){EXTI14, GPIOC, PIN14, EXTI10_15_IVT_POS}
 #define EXTI14_PD14                            (EXTI_mapping_t){EXTI14, GPIOD, PIN14, EXTI10_15_IVT_POS}
 #define EXTI14_PE14                            (EXTI_mapping_t){EXTI14, GPIOE, PIN14, EXTI10_15_IVT_POS}
 #define EXTI14_PH14                            (EXTI_mapping_t){EXTI14, GPIOH, PIN14, EXTI10_15_IVT_POS}

 // EXTI15  
 #define EXTI15_PA15                            (EXTI_mapping_t){EXTI15, GPIOA, PIN15, EXTI10_15_IVT_POS}
 #define EXTI15_PB15                            (EXTI_mapping_t){EXTI15, GPIOB, PIN15, EXTI10_15_IVT_POS}
 #define EXTI15_PC15                            (EXTI_mapping_t){EXTI15, GPIOC, PIN15, EXTI10_15_IVT_POS}
 #define EXTI15_PD15                            (EXTI_mapping_t){EXTI15, GPIOD, PIN15, EXTI10_15_IVT_POS}
 #define EXTI15_PE15                            (EXTI_mapping_t){EXTI15, GPIOE, PIN15, EXTI10_15_IVT_POS}
 #define EXTI15_PH15                            (EXTI_mapping_t){EXTI15, GPIOH, PIN15, EXTI10_15_IVT_POS}


#endif /* EXTI_CFG_H_ */