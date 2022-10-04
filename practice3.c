#include<stdio.h>

int main(){
    int a;
    printf("Enter the value of a:\n");
    scanf("%d",&a);

    for( a; a<20; a++){

        printf("The output is :%d\n",a+1);
    }
    return 0;
}