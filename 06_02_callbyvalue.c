#include<stdio.h>
int sum(int x, int y);
int main(){
    int x=4,y=7;
    printf("The value of x and y before function call is %d and %d\n",x,y);
    printf("The value of 4+7 is %d\n",sum(x,y));
    printf("The value of x and y after function call  is %d and %d\n",x,y);    
    return 0;
}int sum(int x, int y){
    int c;
    c=x+y;
    y=3434;
    x=2342;
    return c; //no change in the value of x+y in call by value function 
}
