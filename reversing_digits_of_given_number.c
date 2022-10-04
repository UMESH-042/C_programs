
// Q.Write a C program to reverse the digits of a given 3-digit Number

#include<stdio.h>

int main(){

    int num,n1,n2,R1,R2,R3;
printf("Enter the number :\n");
scanf("%d",&num);
    R1=num%10;
    n1=num/10;
    R2=n1%10;
    n2=n1/10;
    R3=n2%10;


    printf("%d%d%d\n",R1,R2,R3);
    
    return 0;
}