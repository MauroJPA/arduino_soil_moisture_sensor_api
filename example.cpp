#include "ma_api_soil_moisture_sensor.h"

// Define the pin to which the soil moisture sensor is connected
#define DF_SOIL_MOISTURE_SENSOR_PIN 5

void setup() {
    // Initialize the soil moisture sensor with the specified pin
    ma_api_soil_moisture_sensor_init(DF_SOIL_MOISTURE_SENSOR_PIN);
    
    // Start serial communication for debugging
    Serial.begin(9600);
}

void loop() {
    // Read the soil moisture sensor value
    uint16_t sensorValue = ma_api_soil_moisture_sensor_value();
    
    // Print the sensor value to the serial monitor
    Serial.print("Soil moisture sensor value: ");
    Serial.println(sensorValue);
    
    // Add a delay before taking the next reading
    delay(1000); // Adjust delay time as needed
}
