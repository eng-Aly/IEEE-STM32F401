#ifndef SYSCFG_PRV_H_
#define SYSCFG_PRV_H_

#include "../../lib/STD_TYPES.h"
#include "../../lib/STM32F401xC_HEADER.h"


typedef struct{
	u32 MEMRMP;
	u32 PMC;
	u32 EXTICR[4];
	u32 CMPCR;
}SYSCFG_t;

#define SYSCFG		((volatile SYSCFG_t*)(SYSCFG_BASE_ADDR))


#endif /* SYSCFG_PRV_H_ */