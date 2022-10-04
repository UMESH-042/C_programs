#include<stdio.h>
void printArray(int ptr[],int n){
    for(int i=0; i<n; i++){
        printf("The value of marks for student %d is %d\n",i+1,ptr[i]);
    }
}
int main(){
    int arr[]={23,34,45,55};
    printArray(arr,4);
    return 0;
}