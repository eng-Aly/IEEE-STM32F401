#ifndef EXTI_PRV_H_
#define EXTI_PRV_H_

/* =========================================================
 *                      Includes
 * =========================================================*/

 #include "../../lib/STD_TYPES.h"
 #include "../../lib/STM32F401xC_HEADER.h"


/* =========================================================
 *                  EXTI Registers
 * =========================================================*/

typedef struct
{
    u32 IMR;
    u32 EMR;
    u32 RTSR;
    u32 FTSR;
    u32 SWIER;
    u32 PR;
}EXTI_t;

#define EXTI     ((volatile EXTI_t*)(EXTI_BASE_ADDR))


#endif