#ifndef STM32F401xC_HEADER
#define STM32F401xC_HEADER

/* =========================================================
 *                      Includes
 * =========================================================*/

#include "STD_TYPES.h"

/* =========================================================
 *                    Base Addresses
 * =========================================================*/

 /* ================ GPIO Base Addresses ================ */
#define GPIOA_BASE_ADDR     (volatile u32*)(0x40020000U)
#define GPIOB_BASE_ADDR     (volatile u32*)(0x40020400U)
#define GPIOC_BASE_ADDR     (volatile u32*)(0x40020800U)
#define GPIOD_BASE_ADDR     (volatile u32*)(0x40020C00U)
#define GPIOE_BASE_ADDR     (volatile u32*)(0x40021000U)
#define GPIOH_BASE_ADDR     (volatile u32*)(0x40021C00U)

/* ================ RCC Base Addresses ================ */
#define RCC_BASE_ADDR       (volatile u32*)(0X40023800U)

/* ================ EXTI Base Addresses ================ */
#define EXTI_BASE_ADDR      (volatile u32*)(0x40013C00U)

/* ================ SYSCFG Base Addresses ================ */
#define SYSCFG_BASE_ADDR    (volatile u32*)(0x40013800U)

/* ================ NVIC Base Addresses ================ */
#define NVIC_BASE_ADDR      (volatile u32*)(0xE000E000U)

#endif