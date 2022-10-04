    // Q6. Write a program containing function which 
    // counts the number of positive integers in an array 
#include<stdio.h>



    int CountPositiveNumber(int*arr,int n){
        int pos_count=0;
        for(int i=0; i<n; i++){
            if(arr[i] >0)
            pos_count++;
        }        
    return pos_count;
    }
int main(){
    
    int arr[]={1,-2,3,4,-8,-6.-7};
    CountPositiveNumber(arr,7);
    printf("Count of positive Element is :%d\n ",CountPositiveNumber(arr,7));
    return 0;
}