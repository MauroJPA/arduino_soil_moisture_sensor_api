#include "ma_api_soil_moisture_sensor.h"

// Define the pin to which the soil moisture sensor is connected
#define DF_SOIL_MOISTURE_SENSOR_PIN 36
#define DF_SENSOR_TIMES_FOR_AVERAGE 6

void setup() 
{
    // Start serial communication for debugging
    Serial.begin(115200);
    // Initialize the soil moisture sensor with the specified pin
    ma_api_soil_moisture_sensor_init(DF_SOIL_MOISTURE_SENSOR_PIN);
}

void loop() 
{
    // Read the soil moisture sensor value
    uint16_t sensorValue = ma_api_soil_moisture_sensor_value();
    uint16_t sensorAverageValue = ma_api_soil_moisture_sensor_average_percentage_value(DF_SENSOR_TIMES_FOR_AVERAGE);
    
    // Print the sensor value to the serial monitor
    Serial.print("Soil moisture sensor value: ");
    Serial.println(sensorValue);

    Serial.print("Soil moisture sensor average value: ");
    Serial.println(sensorAverageValue);
    
    // Add a delay before taking the next reading
    delay(1000); // Adjust delay time as needed
}
