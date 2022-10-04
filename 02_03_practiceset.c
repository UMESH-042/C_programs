
// Write a program to detremine whether a number is divisible by 97 or not.

#include<stdio.h>

int main(){
    int num;
    printf("Enter the Number:\n");
    scanf("%d",&num);
    printf("Divisibility Test returns:%d\n",num%97);
    return 0;
}