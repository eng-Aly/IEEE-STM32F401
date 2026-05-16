#ifndef SYSCFG_INT_H_
#define SYSCFG_INT_H_

#include "../../lib/STD_TYPES.h"
#include "../GPIO/GPIO.h"


/* ================= mapping EXTIx to port(A,B,C) */
#define EXTI_GPIOx_Mapping(GPIOX)   ((GPIOX==GPIOA_STRUCT)?0:\
                                     (GPIOX==GPIOB_STRUCT)?1:\
                                     (GPIOX==GPIOC_STRUCT)?2:\
                                     (GPIOX==GPIOD_STRUCT)?3:\
                                     (GPIOX==GPIOE_STRUCT)?4:\
                                     (GPIOX==GPIOH_STRUCT)?7:0)




void SYSCFG_SetEXTI(u8 LineNo, GPIO_TYPEDEF* GPIOX);


#endif /* SYSCFG_INT_H_ */