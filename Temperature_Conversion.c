/* This code is written by CHAUHAN UMESH RAMBAJ
STUDENT ID: 202151042
Date:- 21/01/2022
Q2.
Here we have to write a C program to Convert temperature from Degree centigrade (C) to Fahrenheit (F) and vice versa by taking Input Temperature from the user*/

#include<stdio.h>

    int main() {
            int a;
            float F,C;
        printf("\tWhat conversion do you want to Do ?\n");
        printf("Press 1 For Celsius to Fahrenheit Conversion or Press 0 For Fahrenheit  to Cesius\n");
        scanf("%d",&a);
//when user want conversion from Celsius to Fahrenheit 
         if(a==1){
                printf("Enter the Celsius value:\n");
                    scanf("%f",&C);
                F=(9*C)/5 + 32;
                printf("The value in Fahrenheit is %.2f\n",F);

         }//when user want Conversion from Fahrenheit to Celsius
         else if(a==0){
                printf("Enter the Fahrenheit value:\n");
                    scanf("%f",&F);
                C=(F-32)*5/9;
                printf("The value in Celsius is %.2f\n",C);
         }
    return 0;
}