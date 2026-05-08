#ifndef STM32F401xC_HEADER
#define STM32F401xC_HEADER
#include "STD_TYPES.h"
#define GPIOA_BASE_ADDR     *(volatile u32* )(0x40020000U)
#define GPIOB_BASE_ADDR     *(volatile u32*)(0x40020400U)
#define GPIOC_BASE_ADDR     *(volatile u32*)(0x40020800U)

typedef struct{
    u32 MODER;
    u32 OTYPER;
    u32 OSPEEDR;
    u32 PUPDR;
    u32 IDR;
    u32 ODR;
    u32 BSSR;
    //FInish the GPIO struct
}GPIO_STRUCT;

#endif