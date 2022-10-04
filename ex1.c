#include<stdio.h>

    int main() {
float n;
int n1;
printf("Enter the number :\n");
scanf("%f",&n);

n1=(int)n%10;//typecasting
printf("%d",n1);
    return 0;
}