#ifndef GPIO_CFG_H
#define GPIO_CFG_H

#define OPEN_DRAIN_MODE                 1
#define PUSH_PULL_MODE                  0

#define OP_MODE                         PUSH_PULL_MODE

#define LOW_SPEED_MODE                  0b00
#define MEDIUM_SPEED_MODE               0b01
#define HIGH_SPEED_MODE                 0b10
#define VERY_HIGH_SPEED_MODE            0b11 


#define SPEED_MODE                      VERY_HIGH_SPEED_MODE


#define NO_PULL                         0b00
#define PULLUP                          0b01
#define PULLDOWN                        0b10
#define PUPD_RESERVED                   0b11

#define PULL_TYPE                       NO_PULL

/* PIN Numbers */
#define PIN0                            0
#define PIN1                            1
#define PIN2                            2
#define PIN3                            3
#define PIN4                            4
#define PIN5                            5
#define PIN6                            6
#define PIN7                            7
#define PIN8                            8
#define PIN9                            9
#define PIN10                           10
#define PIN11                           11
#define PIN12                           12
#define PIN13                           13
#define PIN14                           14
#define PIN15                           15

#endif