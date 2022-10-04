/* This code is written by CHAUHAN UMESH RAMBAJ
STUDENT ID: 202151042
Date:- 26/03/2022
 Q2 .
we have to write a C program to sort an array using Bubble  Sort*/
#include <stdio.h>


int main()
{
//Taking input for the length of an array
    printf("Enter the length of an Array: \n");
    int n;
    scanf("%d",&n);
//Taking Input of an Array 
printf("Enter an Array of Length %d:\n",n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }

printf("The sorted Array is :\n");//Displaying Sorted Array
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}