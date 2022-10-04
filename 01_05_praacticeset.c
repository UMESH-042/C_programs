// Write a program to calculate simple interest . 

#include<stdio.h>

int main(){

    int p;
    int r;
    int n;
    int SI= p*r*n/100;
printf("Enter the principle amoount:\n");
scanf("%d",&p);
printf("Enter the rate of interest :\n");
scanf("%d",&r);

printf("Enter the period:\n");
scanf("%d",&n);

printf("The simple interst for above data is : %d\n",SI= p*r*n/100);
    
    return 0;
}