/* This code is written by CHAUHAN UMESH RAMBAJ
STUDENT ID: 202151042
Date:- 19/03/2022
 Q1.
we have to write a C program to arrange the toys with reference to their respective number in ascending or descending order using sorting of arrays*/ 

#include<stdio.h>

    int main() {



// printf("Program for Bob ->\n");
// int n;
// printf("Enter the Value for alice : ");//Taking Input for total number of toys
// scanf("%d",&n);


// int arr[n];

// printf("Enter the Numbers : ");//taking input for respective number of toys as an array
// for(int i=0;i<n;i++){
//     scanf("%d",&arr[i]);
// }
// //Arranging in Ascending order
// for(int i=0;i<n-1;i++){
//     for(int j=i+1;j<n;j++){
//         if(arr[j]<arr[i]){
//             int temp;
//             temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//     }
// }
// printf("Output :");// Displaying Output
// for(int i=0;i<n;i++){
//     printf("%d ",arr[i]);
// }


printf("\nProgram for Alice ->\n"); 
int N;
printf("Enter the Value for  : ");//Taking input for total Number of toys
scanf("%d",&N);


int ar[N];

printf("Enter the Numbers : ");//Taking Input for respective number of toys as an array
for(int i=0;i<N;i++){
    scanf("%d",&ar[i]);
}

//Arranging in Descending order

for(int i=0;i<N-1;i++){
    for(int j=i+1;j<N;j++){
        if(ar[j]>ar[i]){
            int temp;
            temp=ar[i];
            ar[i]=ar[j];
            ar[j]=temp;
        }
    }
}
printf("Output :");
for(int i=0;i<N;i++){
    printf("%d ",ar[i]);
}

    return 0;
}