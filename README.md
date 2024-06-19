## 环境依赖

+ Keil v5.23

+ STM32cubeMX6.1.2

## 主控芯片

STM32F427 VIT6


## 目录结构描述

* [databook]()
* [I2C_ms5611]()
* [src]()
	+ [flash]()
	+ [ms5611]()
* [.gitignore]()
* [readme]()


## 功能概述

- 使用stm32的IIC的HAL函数开发MS5611气压计，获取气压数据和温度数据，并对数据进行补偿。过程将结合芯片手册与代码。

## IO口对应说明

PB8     ------> I2C_SCL

PB7     ------> I2C_SDA

PE2     ------> SPI4_SCK

PE5     ------> SPI4_MISO

PE6     ------> SPI4_MOSI

## 接线图示

![image](https://github.com/liyunyi1936/Air-Pressure-sensor/blob/master/images/ms5611.png)

通信接口：IIC
使用IIC接口进行数据读取。
当PS脚接高电平时，7和8引脚复用为IIC模式，否则为SPI模式；

![image](https://github.com/liyunyi1936/Air-Pressure-sensor/blob/master/images/chip.png)





