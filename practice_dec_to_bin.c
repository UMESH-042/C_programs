#include<stdio.h>

    int main() {

int n,n1,num=0,i=0;
printf("Enter the Decimal Number:\n");
scanf("%d",&n);

while(n>0){


    n1=n%2;
    num=num+pow(10,i)*n1;

    i=i+1;
    n=n/2;
}

printf("The Binary Number of the given Decimal Number is %d \n ",num);
    return 0;
}