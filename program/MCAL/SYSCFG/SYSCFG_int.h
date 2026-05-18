#ifndef SYSCFG_INT_H_
#define SYSCFG_INT_H_

#include "../../lib/STD_TYPES.h"
#include "../GPIO/GPIO.h"


/* ================= mapping EXTIx to port(A,B,C) */
#define EXTI_GPIOx_Mapping(GPIOX)   ((GPIOX==GPIOA)?0:\
                                     (GPIOX==GPIOB)?1:\
                                     (GPIOX==GPIOC)?2:\
                                     (GPIOX==GPIOD)?3:\
                                     (GPIOX==GPIOE)?4:\
                                     (GPIOX==GPIOH)?7:0)




void SYSCFG_SetEXTI(u8 LineNo, GPIO_ENUM GPIOX);


#endif /* SYSCFG_INT_H_ */