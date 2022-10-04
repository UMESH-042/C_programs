/* This code is written by CHAUHAN UMESH RAMBAJ
STUDENT ID: 202151042
Date:- 20/01/2022
Q1.
Here we have to take Input of a Integer Number From the user Then we have to print the Multiplication Table of that Given Number using While Loop*/

#include<stdio.h>

    int main() {

        int n,i=1;
        printf("Enter the Integer Number:\n");
        scanf("%d",&n);

        //using while loop
        while(i<=10){

                printf("\t\t%d X %d = %d\n",n,i,n*i);
                i=i+1;

        }

    return 0;
}