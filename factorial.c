#include<stdio.h>

int main(){
    int factorial=1;
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        factorial*=i+1;
        
    }
    printf("Factorial of %d is:%d\n",n,factorial);
    return 0;
}