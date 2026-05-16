#ifndef NVIC_PRV_H_
#define NVIC_PRV_H_

/* =========================================================
 *                      Includes
 * =========================================================*/

 #include "../../lib/STD_TYPES.h"
 #include "../../lib/STM32F401xC_HEADER.h"


/* =================================
            NVIC Register 
====================================*/
typedef struct
{
    u32 ISER[8];                // Interrupt Set-Enable Registers
	u32 Reserved0[24];
    u32 ICER[8];                // Interrupt Clear-Enable Registers
    u32 Reserved1[24];
    u32 ISPR[8];                // Interrupt Set-Pending Registers
    u32 Reserved2[24];
    u32 ICPR[8];                // Interrupt Clear-Pending Registers
    u32 Reserved3[24];
    u32 IABR[8];                // Interrupt Active Bit Registers
    u32 Reserved4[56];
    u8 IPR[240];                // Interrupt Priority Registers (8 bits each)
    u32 Reserved5[644];
    u32 STIR;                   // Software Trigger Interrupt Register
    
}NVIC_t;

#define NVIC 		     ((volatile NVIC_t*)(NVIC_BASE_ADDR))


#endif /* NVIC_PRV_H_ */