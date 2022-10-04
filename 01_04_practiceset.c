// Write a program to convert degree celsius into farhaneit

#include<stdio.h>

int main(){
float celsius;

float far=(celsius*9/5)+32;

printf("Enter the temperature in celsius:\n");
scanf("%f",&celsius);

printf("The value of this celsius temperature in Fahrenheitis :%f\n",far=(celsius*9/5)+32);


    return 0;
}