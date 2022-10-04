//Write a program to calculate the factorial of given number n.
#include<stdio.h>

int main(){
    
    int i=1,n,factorial=1;
    printf("Enter the value of n :\n");
    scanf("%d",&n);

    for(i=1; i<=n ;i++){

        factorial*=i;
    }
     printf("Factorial of the given number is:%d\n",factorial);
    return 0;
}