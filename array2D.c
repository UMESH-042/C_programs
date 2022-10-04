/* This code is written by CHAUHAN UMESH RAMBAJ
STUDENT ID: 202151042
Date:- 19/03/2022
 Q1.
we have to write a C program to find Multiplication of 2 Matrices */

#include <stdio.h>

int main()
{
int r1,c2,c1;
    scanf("%d %d %d",&r1,&c1,&c2);//Taking input for the dimensions of Matrices A and B
    int A[r1][c1], B[c1][c2], result[r1][c2], sum = 0;
    printf("Enter the Matrix A\n");
    for (int i = 0; i < r1; i++)//Taking input for Matrix A
    {
        for (int j = 0; j < c1; j++)
        {

            scanf("%d", &A[i][j]);
        }
    
    }
    printf("\n");
    printf("Enter the Matrix B\n");
//Taking Input for Matrix B 
    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
           
            scanf("%d", &B[i][j]);
        }
    
    }
    printf("\n");
//Doing Matrix Multiplication
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c2; k++)
            {
                
                sum += A[i][k] * B[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
//Displaying Results of Matrix Multiplication
    printf("Resultant Matrix is :\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d  ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}