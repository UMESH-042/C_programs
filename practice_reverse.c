#include<stdio.h>
int reverse(int*arr,int n){
    int temp;
    for(int i=0;i<(n/2); i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;

    }
}
int main(){
    int arr[]={2,6,7,34,3,5,9};
    reverse(arr,7);
    for(int i=0; i<7; i++){
        printf("The value of %d Element is %d\n ",i+1,arr[i]);
    }
    return 0;
}