#ifndef STM32_F401XC_OPTIONS_H
#define STM32_F401XC_OPTIONS_H

typedef enum{
    TIM1,
    TIM2,
    TIM3,
    TIM4,
    TIM5,
    TIM9,
    TIM10,
    TIM11
}TIMER_ENUM;



typedef enum{
    USART1,
    USART2,
    USART6
}USART_ENUM;

typedef enum{
    I2C1,
    I2C2,
    I2C3,
}I2C_ENUM;


typedef enum{
    SPI1,
    SPI2,
    SPI3,
}SPI_ENUM;


typedef enum{
    GPIOA,
    GPIOB,
    GPIOC,
    GPIOD,
    GPIOE,
    GPIOH
}GPIO_ENUM;

#endif
