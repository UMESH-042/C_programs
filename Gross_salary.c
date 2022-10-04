/*This Code is written by CHAUHAN UMESH RAMBAJ
Student ID:202151042
Date: 4/01/2022
We Have To Calculate Gross Salary of a User  by Taking  Input From User*/ 

#include<stdio.h>

int main(){
    
    int salary;
    float DA;
    float HRA;
    float GS;
    printf("Enter Your Salary:\n");
    scanf("%d",&salary);

    DA=(salary*40)/100;

    HRA=(salary*20)/100;

    GS=salary+DA+HRA;

    printf("Dearness Allowance is %.0f \n",DA);
    printf("House rent Allowance is %.0f \n",HRA);
    printf("Gross salary is %.0f \n",GS);
    return 0;
}