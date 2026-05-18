

#include "SYSCFG_int.h"
#include "SYSCFG_prv.h"


void SYSCFG_SetEXTI(u8 LineNo, GPIO_ENUM GPIOx)
{
	u8 EXTI_index = LineNo / 4;
	u8 EXTI_position = (LineNo % 4) * 4;
    // clear 4 bits
	SYSCFG->EXTICR[EXTI_index] &=  ~((0xf) << EXTI_position);
    SYSCFG->EXTICR[EXTI_index] |=   ((EXTI_GPIOx_Mapping(GPIOx) & 0xF) << EXTI_position);
}
