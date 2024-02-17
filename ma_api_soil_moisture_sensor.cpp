/**
  ******************************************************************************
  * @Company    : Mauro Almeida.
  * @file       : ma_api_soil_moisture_sensor.c
  * @author     : Mauro Almeida
  * @version	  : V0.0 
  * @date       : 09/02/2024
  * @brief      : API of capacitive soil moisture sensor (Hardware v1.2)
  ******************************************************************************
*/ 

/* Includes ------------------------------------------------------------------*/ 
// C language standard library

// Mauro Almeida driver library

// API library
#include "ma_api_soil_moisture_sensor.h"

/*******************************************************************************
							HOW TO USE THIS API
********************************************************************************

1. 	First, you should include in your .c file the 
    "ma_api_soil_moisture_sensor.h" file.

2.  Call ma_api_soil_moisture_sensor_init(DESIRED-PIN) to initialize and setup 
    the driver.

3.  Call ma_api_soil_moisture_sensor_value() to get the sensor value.

*******************************************************************************/

/* Private define ------------------------------------------------------------*/

/* Private macros ------------------------------------------------------------*/
/* Private typedef -----------------------------------------------------------*/

typedef struct
{
  uint8_t pin;
} st_moisture_sensor_t;

/* Private variables ---------------------------------------------------------*/
st_moisture_sensor_t _stMoistureSensor = {0};

/* Private function prototypes -----------------------------------------------*/  

/* Public objects ------------------------------------------------------------*/

/* Body of private functions -------------------------------------------------*/
/**
  * @Func       : ma_api_soil_moisture_sensor_init    
  * @brief      : Init. soil moisture sensor
  * @pre-cond.  : 
  * @post-cond. : Soil moisture sensor init. and ready to be used
  * @parameters : Sensor pin for physical conection sensor in Hardware
  * @retval     : 
  */
void ma_api_soil_moisture_sensor_init(uint8_t in_sensorPin)
{
    _stMoistureSensor.pin = in_sensorPin;
}

/**
  * @Func       : ma_api_soil_moisture_sensor_value    
  * @brief      : Read soil moisture sensor value
  * @pre-cond.  : ma_api_soil_moisture_sensor_init
  * @post-cond. : Get soil moisture sensor value
  * @parameters : void
  * @retval     : Soil moisture sensor value in ADC value
  */
uint16_t ma_api_soil_moisture_sensor_value(void) 
{
    return analogRead(_stMoistureSensor.pin);
}
/*****************************END OF FILE**************************************/