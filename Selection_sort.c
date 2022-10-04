/* This code is written by CHAUHAN UMESH RAMBAJ
STUDENT ID: 202151042
Date:- 26/03/2022
 Q1.
we have to write a C program to sort an array using Selection Sort*/
#include<stdio.h>

    int main() {
printf("Enter the length of an Array : ");
int n;
scanf("%d",&n);
// scanf("\n");
printf("Enter an Array of Length %d :\n",n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[i]){//for arranging elements in ascending order
        //arr[j]>arr[i] for arranging in desceding order.
            int temp;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}

printf("The Sorted Array is :\n");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
    return 0;
}