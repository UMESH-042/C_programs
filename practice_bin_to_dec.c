#include<stdio.h>
#include<math.h>

    int main() {
int n,n1,num=0,i=0;

printf("Enter the Binary Number:\n");
scanf("%d",&n);

while(n>0){


    n1=n%10;
    num=num+pow(2,i)*n1;
    i=i+1;
    n=n/10;
}
printf("The Decimal Number for the given Binary Number is %d\n",num);
    return 0;
}