#include "NVIC_prv.h"
#include "NVIC_int.h"


/* =========================================================
 *                      Includes
 * =========================================================*/

 #include "NVIC_int.h"
 #include "NVIC_prv.h"

 /* =========================================================
 *                          APIs
 * =========================================================*/

 
void NVIC_IRQx_EXTIx_EN(u8 IVT_pos){
    set_bit(NVIC->ISER[IVT_pos / 32], IVT_pos % 32);   // Enable the specific EXTI line interrupt
}

void NVIC_IRQx_EXTIx_DIS(u8 IVT_pos){
    clear_bit(NVIC->ICER[IVT_pos / 32], IVT_pos % 32); // Disable the specific EXTI line interrupt
}

void Enable_ALL_NVIC(){

    set_bit(NVIC->ISER[0], 6);   // EXTI0
    set_bit(NVIC->ISER[0], 7);   // EXTI1
    set_bit(NVIC->ISER[0], 8);   // EXTI2
    set_bit(NVIC->ISER[0], 9);   // EXTI3
    set_bit(NVIC->ISER[0], 10);  // EXTI4
    set_bit(NVIC->ISER[0], 23);  // EXTI5-9
    set_bit(NVIC->ISER[1], 8);   // EXTI10-15
}
void Disable_ALL_NVIC(){

    clear_bit(NVIC->ICER[0], 6);   // EXTI0
    clear_bit(NVIC->ICER[0], 7);   // EXTI1
    clear_bit(NVIC->ICER[0], 8);   // EXTI2
    clear_bit(NVIC->ICER[0], 9);   // EXTI3
    clear_bit(NVIC->ICER[0], 10);  // EXTI4
    clear_bit(NVIC->ICER[0], 23);  // EXTI5-9
    clear_bit(NVIC->ICER[1], 8);   // EXTI10-15
}