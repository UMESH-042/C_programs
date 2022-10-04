
//Write a program to calculate sum upto n natual numbers

#include<stdio.h>

int main(){

  int i=0,sum=0,n;
  printf("Enter the value of n:\n");
  scanf("%d",&n);
  for(i=0;i<=n;i++){
      sum+=i;
  }  
    printf("The sum from( 1 to n) is %d\n",sum);
    return 0;
}