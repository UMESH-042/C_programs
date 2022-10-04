/* write a program to print the address of a variable .use this adderess
to get the value of this variable*/ 
#include<stdio.h>

int main(){
    int a=3;
    int *ptr;
    ptr=&a;
    printf("The address of variable a is %d\n",ptr);
    printf("The value of variable a is %d\n",*ptr);
    printf("The value of variable a is %d\n",a);
    return 0;
}