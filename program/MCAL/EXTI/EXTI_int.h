#ifndef EXTI_INT_H_
#define EXTI_INT_H_

/* =========================================================
 *                      Includes
 * =========================================================*/

 #include "../../lib/STD_TYPES.h"
 #include "../GPIO/GPIO_prv.h"
 #include "../../lib/STM32F401xC_OPTIONS.h"

 /* =========================================================
 *                  User Configuration
 * =========================================================*/

typedef struct
{
    u16             EXTI_Line;                      // EXTI Line Number (0-15) refere to @ref EXTI_Lines or EXTI_ENUM
    GPIO_TYPEDEF    *GPIO_Port;                     // GPIO Port (GPIOA, GPIOB, etc.)
    u16             GPIO_Pin;                       // GPIO Pin Number (0-15)
    u16             IVT_position;                   // IVT Position for EXTI Line ( 6-10 for EXTI0-4, 23 for EXTI5-9, 40 for EXTI10-15)        

} EXTI_mapping_t;

typedef struct
{
    EXTI_mapping_t  EXTIx_Pxx;                      // EXTIx_Pxx --> Line, Port, Pin Mapping  @ref EXTIx_Pxx
    u8              Trigger;                        // Trigger Type (Rising, Falling, Both)
    u8              Enable;                         // Enable or Disable EXTI Line
    void            (* irq_Callback)(void);         // Callback Function Pointer for EXTI Interrupt

}EXTI_config_t;


 /* =========================================================
 *                      APIs
 * =========================================================*/

 void EXTI_voidInit(EXTI_config_t* config);
 void EXTI_voidUpdate(EXTI_config_t* config);
 void EXTI_voidDeInit(void);


 #endif /* EXTI_INT_H_ */
