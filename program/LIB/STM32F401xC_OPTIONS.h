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
    SPI4,
}SPI_ENUM;


typedef enum{
    GPIOA,
    GPIOB,
    GPIOC,
    GPIOD,
    GPIOE,
    GPIOH
}GPIO_ENUM;

typedef enum{
    SYS,
    TIM_12,
    TIM_345,
    TIM_9_10_11,
    I2C_123,
    SPI_1234,
    SPI_23,
    USART_12,
    USART_6,
    I2C_23,
    OTG1_FS
}AF_ENUM;

#endif
