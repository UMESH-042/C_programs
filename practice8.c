#include<stdio.h>

int main(){
    
    int a=5,i=0;
    while(i<20){

        printf("output:%d\n",i);
        i++;
        if(i!=5){
            continue;
        }
        else{
            printf("%d\n",i);
        }
    }
    return 0;
}