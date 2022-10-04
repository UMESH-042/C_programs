#include<stdio.h>
int main(){

    for(int i=0 ; i<100 ; i++){
        if(i==50){
            break;
        }
        printf("The output is : %d\n", i);
    } 
    return 0;
}