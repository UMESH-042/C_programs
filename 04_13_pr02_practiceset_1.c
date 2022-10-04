/*write a program to print multiplication table of 10 in reverse order*/
#include<stdio.h>
int main(){

printf("***Multiplication Table of 10***\n");

for(int i=10 ; i>0; i--){

    printf("10 X %d = %d\n",i , 10*i);
}
       return 0;
}