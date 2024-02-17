/**
    ******************************************************************************
    * @Company    : Mauro Almeida.
    * @file       : ma_api_soil_moisture_sensor.h
    * @author     : Mauro Almeida
    * @version	  : V0.0 
    * @date       : 09/02/2024
    * @brief      : Header file of capacitive soil moisture sensor (Hardware v1.2)
    ******************************************************************************
*/ 

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MA_API_MOISTURE_SENSOR_H
#define __MA_API_MOISTURE_SENSOR_H

/* Includes ------------------------------------------------------------------*/  
#include <Arduino.h>
/* Define --------------------------------------------------------------------*/
/* Typedef -------------------------------------------------------------------*/
/* Public objects ------------------------------------------------------------*/
extern void     ma_api_soil_moisture_sensor_init    (uint8_t in_sensorPin); //Initialize moisture sensor
extern uint16_t ma_api_soil_moisture_sensor_value   (void);                 //Read moisture sensor value

#endif /* __MA_API_MOISTURE_SENSOR_H */
/*****************************END OF FILE**************************************/