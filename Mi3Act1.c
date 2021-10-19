/*
Write a C program to read temperature in centigrade and display a suitable message according to temperature state below.
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot
*/
#include <stdio.h>

int main(){
    int temp;
    printf("Please input temperature: ");
    scanf("%d", &temp);
    if(temp < 0){
        printf("The weather is freezing!");
    }
    else if(temp >= 0 && temp <=10){
        printf("It's a very cold weather!");
    }
    else if(temp >= 10 && temp <=20){
        printf("It's a cold weather!");
    }
    else if(temp >= 20 && temp <=30){
        printf("It's a normal weather!");
    }
    else if(temp >= 30 && temp <=40){
        printf("It's a hot weather!");
    }
    else if(temp>=40){
        printf("It's a very hot weather!");
    }
    return 0;
}
