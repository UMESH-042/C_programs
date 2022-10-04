#include<stdio.h>

int main(){
    int a;
    printf("Enter the value\n");
    scanf("%d",&a);
    switch(a){
        case 2:
        printf("The value is 2\n");

        case 3:
        printf("The value is 3\n");

        default :
        printf("The value is not 2 or 3\n");
    }
    return 0;
}