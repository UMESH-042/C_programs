/*This Code is written by CHAUHAN UMESH RAMBAJ
Student ID:202151042
Date: 3/02/2022
we have to write a C program to print Stars Sequence in Right angled Triangle Form */ 

#include<stdio.h>

    int main() {

        int n;  
        printf("Enter the Number of lines to be printed:\n");
        scanf("%d",&n);//Taking input for the Number of lines n to be printed  
//for loop
        for(int i=0;i<=n;i++){
            //for loop for printing stars
for(int j=0;j<i;j++){
            printf("*");
            printf(" ");
}
printf("\n"); //printing \n to get new line after completion of inner loop  
        }
    return 0;
}