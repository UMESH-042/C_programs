// Q.Write a C program that finds and Print the right most digit of the integral portion of float

#include<stdio.h>

    int main() {
float a;
int b,c;

    printf("Enter the Floating Number:\n");
    scanf("%f",&a);
    b=a;
// printf("%d",b);
    c=b%10;
    printf("%d",c);
    return 0;
}