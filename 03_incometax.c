// Write a program to calculate  income tax 
#include<stdio.h>

int main(){
    
    float tax=0, income;
    printf("Enter your Income:\n");
    scanf("%f",&income);

    if(income>=250000 && income<=500000){

        tax=tax+0.05*(income-250000);
    }
 
 if(income>=500000 && income<=1000000){

        tax=tax+0.20*(income-500000);
    }

 if(income>=1000000){

        tax=tax+0.30*(income-1000000);
    }

    printf("Your net income tax to be paid by 26th of this month is : %f\n",tax);

    return 0;
}


/* Q4 Write a program to find whether a year entered by the 
user is a leap year or not .Take year as an input from the user*/