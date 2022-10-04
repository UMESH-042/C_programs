/* Write a program to claculate the factorial
of a given number using a FOR loop*/
#include<stdio.h>

int main(){
    int i=0,n ,factorial=1;
    printf("Enter the Number:\n");
    scanf("%d",&n);

    for(i=1 ; i<=n ;i++){

        factorial *=i;//  factorial=factorial*i;
    }
    printf("The value of factorial is %d is %d\n",n, factorial);
    return 0;
}