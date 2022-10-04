#include<stdio.h>

int main(){
    
    int a;
    printf("Enter the value of a:\n");
    scanf("%d",&a);

    do{
        printf("The value of a is:%d\n",a);

        if(a==7){
            break;
        }
        a++;
    }
    while(a<=20);
    return 0;
}