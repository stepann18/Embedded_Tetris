/*
 * i2c.h
 */

#ifndef I2C_H_
#define I2C_H_

#include "msp.h"
#include <stdint.h>

/**********************************************************************************************
 * This function initializes the hardware for I2C
 **********************************************************************************************/
void i2c_init(void);

/**********************************************************************************************
 * This function reads using I2C
 **********************************************************************************************/
uint16_t i2c_read_16(uint8_t slave_address, uint8_t dev_address);

/**********************************************************************************************
 * This function writes using I2C
 **********************************************************************************************/
void i2c_write_16(uint8_t slave_address, uint8_t dev_address, uint16_t data);



#endif /* I2C_H_ */