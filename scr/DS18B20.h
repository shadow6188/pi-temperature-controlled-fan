//
// Created by gerardo on 2/6/23.
//

#ifndef PI_TEMPERATURE_CONTROLLED_FAN_DS18B20_H
#define PI_TEMPERATURE_CONTROLLED_FAN_DS18B20_H

#define DS18B20ID "28";
#define W1_DEVICE_LOCATION "/sys/bus/w1/devices/";
#define W1_SLAVE "/w1_slave"

struct Sensor {
    char *SensorName;
    FILE *SensorFile
};

struct SensorList {
    Sensor **Sensors;
    int SensorCount;
};

SensorList *GetSensors(char **Sensor,int sensor_count);
Sensor *GetSensor(char *sensorId, char *sensorName);

#endif //PI_TEMPERATURE_CONTROLLED_FAN_DS18B20_H
