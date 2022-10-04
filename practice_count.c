#include<stdio.h>

   
    int CountPositiveNumber(int*arr,int n){
        int pos_count=0;
        for(int i=0; i<n; i++){
            if(arr[i]>0){
                pos_count++;

            }
        }
        return pos_count;
    } int CountNegativeNumber(int*arr,int n){
        int neg_count=0;
        for(int i=0; i<n; i++){
            if(arr[i]<0){
                neg_count++;

            }
        }
        return neg_count;
    }
int main(){
    int arr[7]={1,-2,-3,6,7,8,-10};
    // arr[7]={1,-2,-3,6,7,8,-10};
    printf("The number of Positive Elements are :%d\n",CountPositiveNumber(arr,7));
    printf("The number of Negative Elements are :%d\n",CountNegativeNumber(arr,7));
    return 0;
}