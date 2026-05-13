#ifndef GPIO_PRV_H
#define GPIO_PRV_H

#include "../../lib/STD_TYPES.h"
#include "../../LIB/STM32F401xC_HEADER.h"


typedef struct RCC_regs_struct
{
    u32 MODER;
    u32 OTYPER;
    u32 OSPEEDR;
    u32 PUPDR;
    u32 IDR;
    u32 ODR;
    u32 BSSR;
    u32 LCKR;
    u32 AFRL;
    u32 AFRH;
}GPIO_TYPEDEF;


#endif