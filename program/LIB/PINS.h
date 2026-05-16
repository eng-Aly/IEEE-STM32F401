#ifndef PIN_HEADER
#define PIN_HEADER


//gpio -> 16 pin 

//pin number = gpio_index * 16 + pin_number in this gpio
//PA0 = 0*16 + 0 -> 
//PB3 = 1*16 + 3 ->19

/* PA pins */
#define PA0       0
#define PA1       1
#define PA2       2
#define PA3       3
#define PA4       4
#define PA5       5
#define PA6       6
#define PA7       7
#define PA8       8
#define PA9       9
#define PA10      10
#define PA11      11
#define PA12      12
#define PA13      13
#define PA14      14
#define PA15      15

/* PB pins */
#define PB0       16
#define PB1       17
#define PB2       18
#define PB3       19
#define PB4       20
#define PB5       21
#define PB6       22
#define PB7       23
#define PB8       24
#define PB9       25
#define PB10      26
#define PB11      27
#define PB12      28
#define PB13      29
#define PB14      30
#define PB15      31

/* PC pins */
#define PC13      44
#define PC14      45
#define PC15      46

#define INPUT    0b00
#define OUTPUT   0b01
#define AF       0b10
#define ANALOG   0b11

#define HIGH      1
#define LOW       0

#endif