/*  Write a program using recursion to calculate nth element
of fibonacci series*/

/*Hint : 
 fib(n)= fib(n-1) + fib(n-2) */
#include<stdio.h>
 int fib(int x);

int main(){
    int a;
    printf("Enter the value :\n");
    scanf("%d",&a);
    printf("Fibonacci sequence for given number is %d\n",fib(a));
    return 0;
} 

int fib(int x){
if(x==1){

    return 0;
}else  if(x==2){

    return 1;
}
else  {

    return  fib(x-1)+fib(x-2);
}

}