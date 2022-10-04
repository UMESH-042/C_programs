/* This code is written by CHAUHAN UMESH RAMBAJ
STUDENT ID: 202151042
Date:- 21/01/2022
Q1.
Here we have to take Input of Three Numbers and then we have 
find Greatest of them by Algorithm*/


#include<stdio.h>

int main(){

int a,b,c;

printf("Enter the First Number:\n");
scanf("%d",&a);

printf("Enter the Second Number:\n");
scanf("%d",&b);

printf("Enter the Third Number:\n");
scanf("%d",&c);


if(a>b){

    if(a>c){
        printf("%d is the Greatest Number\n",a);
    }else{
        printf("%d is the Greatest Number\n",c);
    }
}  else{
    if(b>c){
        printf("%d is the Greatest Number\n",b);
    }else{
        printf("%d is the Greatest Number\n",c);
    }
}
    return 0;
}