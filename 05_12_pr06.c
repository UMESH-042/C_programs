// write a recursive function to calculate the sum of first natural number.
#include<stdio.h>
int sum(int x);
int main(){
    
    int a;
    printf("Enter the Value :\n");
    scanf("%d",&a);
    printf("The sum upto n natural number is :%d\n",sum(a));


    return 0;
}
int sum(int x){
 if(x==1){
     return 1;
 }else if(x==2){
     return 3;
 }else{
     return sum(x-1)+x;
 }
}