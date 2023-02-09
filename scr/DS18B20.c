#include "DS18B20.h"
#include <dirent.h>
#include <string.h>

int count_sensors(){
    int count = 0;

    DIR *directory;
    struct dirent *dirEntry;

    if(!(directory = opendir(W1_DEVICE_LOCATION)))
        return count;

    while ((dirEntry = readdir(dir))){
        if (strncmp(dirEntry->d_name, DS18B20ID,strlen(DS18B20ID)) == 0){
            count++;
        }
    }
    closedir(directory);
    return count;
}