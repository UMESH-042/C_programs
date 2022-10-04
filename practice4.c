//write a program to print first n natural numbers using for loop

#include<stdio.h>

int main(){
    int a=0;
    int n;
    printf("Enter the value of n :\n");
    scanf("%d",&n);

    for(a; a<n ; a++){
        printf("The output is :%d\n",a+1);
    }
    return 0;
}