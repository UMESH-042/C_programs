/* This code is written by CHAUHAN UMESH RAMBAJ
STUDENT ID: 202151042
Date:- 12/01/2022
 Q2. (b) Without Using Third Variable
Here we are given Two Numbers , we have 
to Swap the Given two Numbers  without using Third Variable*/


#include<stdio.h>

    int main() {
        int a=2,b=5;

    printf("\t\tBefore Swapping\n\n");
    printf("First Number is %d\n",a);
    printf("Second Number is %d\n",b);
   
        a=a+b;
        b=a-b;
        a=a-b;

    printf("\t\tAfter Swapping\n\n");
    printf("First Number is %d\n",a);
    printf("Second Number is %d\n",b);

    return 0;
}