/* This code is written by CHAUHAN UMESH RAMBAJ
STUDENT ID: 202151042
Date:- 11/01/2022
 Q2.
Here we have to take Input of Two Numbers and then we have 
to Swap the Given two Numbers  using Third Variable*/


#include<stdio.h>

int main(){

int a,b,temp;

printf("Enter the first Number :\n");
scanf("%d",&a);

printf("Enter the second Number :\n");
scanf("%d",&b);

    //Printing the Two NUmbers before Swapping 

printf("\nThe First Number is %d, Before swapping. \n",a);
printf("The Second Number is %d, Before swapping.\n",b);
    
    //Swapping the Numbers by performing Following Algorithms

    temp=a;
    a=b;
    b=temp;
    
    
     //Printing the Two NUmbers before Swapping 

printf("\nThe First Number is %d,  After swapping.  \n",a);
printf("The Second Number is %d, After swapping.\n",b);

    return 0; 
}