#include <stdio.h>

void printSensorData(void *ptr, char type);

int main(){
    float temperature;
    int motion;
    char door;
    printf("Enter temperature: ");
    scanf("%f", &temperature);
    printf("Enter motion status (1 for Motion, 0 for No Motion): ");
    scanf("%d", &motion);
    printf("Enter door status (O for Open, C for Closed): ");
    scanf(" %c", &door);
    printSensorData(&temperature, 'f');
    printSensorData(&motion, 'i');
    printSensorData(&door, 'c');
    return 0;
}

void printSensorData(void *ptr, char type){
    if (type == 'f'){
        printf("Temperature = %.2f Celsius\n", *(float *)ptr);
    }
    else if (type == 'i'){
        if (*(int *)ptr == 1)
            printf("Motion Detected\n");
        else
            printf("No Motion\n");
    }
    else if (type == 'c'){
        if (*(char *)ptr == 'O'){
            printf("Door Open\n");
        }
        else if (*(char *)ptr == 'C'){
            printf("Door Closed\n");
        }
    }
}
