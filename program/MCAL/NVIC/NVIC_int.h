#ifndef NVIC_INT_H_
#define NVIC_INT_H_

#include "../../lib/STD_TYPES.h"
#include "../../lib/BIT_MATH.h"


/* =================================
        APIs Supported by "NVIC"
====================================*/
void NVIC_IRQx_EXTIx_EN(u8 IVT_pos);
void NVIC_IRQx_EXTIx_DIS(u8 IVT_pos);
void Enable_ALL_NVIC();
void Disable_ALL_NVIC();


#endif /* NVIC_INT_H_ */