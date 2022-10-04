/*This Code is written by CHAUHAN UMESH RAMBAJ
Student ID:202151042
Date: 28/01/2022
we have to convert the  Decimal number given  by the user into Binary number */ 

#include<stdio.h>

    int main() {
    int n,n1,num=0,x=1,i=0;//Declaring variables and assinging value 
    printf("Enter a Decimal number :\n");
    scanf("%d",&n); //Taking Input from the user
    printf("The Decimal Number Entered is :%d\n",n);//printing Given Decimal number

//Using while loop
    while(n>0){
        n1=n%2;
        num= num+x*n1;//num =num + pow(10,i)*n1
        x=x*10;//i=i+1
        n=n/2;
    }
     printf("The equivalent Binary number of given Decimal number is %d",num);//printing Binary Number

    return 0;
}