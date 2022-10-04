/*write a program to sum first ten natural number using while loop*/
#include<stdio.h>
int main(){
int i,sum=0, n;
printf("Enter the value of n :");
scanf("%d",&n);
for(i=0; i<=n; i++){

    sum=sum+i;//sum +=i;// sum=sum+i;
}

printf("The value of sum(1 to n) is %d\n",sum);
return 0;
}