#ifndef __FLASH_ONCHIP_H
#define __FLASH_ONCHIP_H


#include "stm32f4xx_hal.h"

#define STM32_FLASH_BASE        0x08000000 	
#define FLASH_WAITETIME         50000          
#define SYS_STORAGE_ADDR        0X1FFF0000
#define ADDR_FLASH_SECTOR_0     ((uint32_t)0x08000000) 	
#define ADDR_FLASH_SECTOR_1     ((uint32_t)0x08004000) 
#define ADDR_FLASH_SECTOR_2     ((uint32_t)0x08008000)
#define ADDR_FLASH_SECTOR_3     ((uint32_t)0x0800C000) 	
#define ADDR_FLASH_SECTOR_4     ((uint32_t)0x08010000) 
#define ADDR_FLASH_SECTOR_5     ((uint32_t)0x08020000) 	
#define ADDR_FLASH_SECTOR_6     ((uint32_t)0x08040000) 
#define ADDR_FLASH_SECTOR_7     ((uint32_t)0x08060000)
#define ADDR_FLASH_SECTOR_8     ((uint32_t)0x08080000) 	
#define ADDR_FLASH_SECTOR_9     ((uint32_t)0x080A0000)
#define ADDR_FLASH_SECTOR_10    ((uint32_t)0x080C0000) 	
#define ADDR_FLASH_SECTOR_11    ((uint32_t)0x080E0000) 

#define ADDR_FLASH_SECTOR_12	((uint32_t)0x08100000) 	 
#define ADDR_FLASH_SECTOR_13	((uint32_t)0x08104000) 	 
#define ADDR_FLASH_SECTOR_14    ((uint32_t)0x08108000) 	 
#define ADDR_FLASH_SECTOR_15	((uint32_t)0x0810C000) 	 
#define ADDR_FLASH_SECTOR_16    ((uint32_t)0x08110000) 	 
#define ADDR_FLASH_SECTOR_17	((uint32_t)0x08120000) 	  
#define ADDR_FLASH_SECTOR_18	((uint32_t)0x08140000) 	  
#define ADDR_FLASH_SECTOR_19	((uint32_t)0x08160000) 	  
#define ADDR_FLASH_SECTOR_20    ((uint32_t)0x08180000) 	  
#define ADDR_FLASH_SECTOR_21	((uint32_t)0x081A0000) 	  
#define ADDR_FLASH_SECTOR_22    ((uint32_t)0x081C0000) 	  
#define ADDR_FLASH_SECTOR_23    ((uint32_t)0x081E0000) 	   

void flash_read(uint32_t read_addr,uint8_t *buff, uint32_t num);
void flash_write(uint32_t write_addr, uint8_t *data, uint32_t num);

#endif



