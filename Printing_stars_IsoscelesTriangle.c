/*This Code is written by CHAUHAN UMESH RAMBAJ
Student ID:202151042
Date: 3/02/2022
we have to write a C program to  print stars sequence in Isosceles Triangle*/
#include<stdio.h>

    int main() {
    int n;
        printf("Enter the Numbers of lines to be printed:\n");
        scanf("%d",&n);//Taking input from the user
for(int i=0;i<n;i++){

    for(int j=n;j>i;j--){
        printf("  ");//for printing the space to get the pattern

    }
    for(int k=0;k<=i;k++){
        printf("*   ");//for printing * with having space 
// printf("   ");
    }
    printf("\n");// To get New line after this loop
}
    return 0;
}