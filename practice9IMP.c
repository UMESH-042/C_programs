//write a multiplication table for a given number


#include<stdio.h>

int main(){

int n;
printf("Enter the number:\n");
scanf("%d",&n);
 printf("\t\t\t***   Multiplication Table for a given number   ***\n\n");

for(int i=1; i<=10; i++){
    printf("\t\t\t\t\t%d x %d = %d\n",n,i,n*i);
}

    return 0;
}