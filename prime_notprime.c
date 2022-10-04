#include<stdio.h>


int prime_or_not(int a){
     int sum=0;

    while (a!=0)
    {
        sum=sum+a%10;
        a=a/10;
    }

   return sum;
}
    int main() {
    int num;
    printf("Enter the Number:\n");
    scanf("%d",&num);

 prime_or_not(num);
 if((prime_or_not(num))%3!=0){
     printf("%d is  a Prime\n",num);
}  
      

    return 0;
}