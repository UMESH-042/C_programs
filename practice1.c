#include<stdio.h>

int main(){
    int a;
    printf("Enter the value:\n");
    scanf("%d",&a);

    do{
printf("The output is :%d\n",a+1);
a++;


    }while(a<20);
    return 0;
}