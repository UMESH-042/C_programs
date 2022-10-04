#include<stdio.h>
    void printarray(int *ptr,int n){
        for(int i=0; i<n; i++){
            printf("The value of element %d is %d\n",i+1,*(ptr+i));

        }
        ptr[2]=555; // This value will be changed in arr array of  main as well
    }
    //   void printarray(int ptr[],int n){
    //     for(int i=0; i<n; i++){
    //         printf("The value of element %d is %d\n",i+1,ptr[i]);

    //     }
        
    // }
int main(){
    int arr[]= {24,43,34,4,45,56,67};
    printarray(arr,7);
    printf("%d",arr[2]);
    return 0;
}