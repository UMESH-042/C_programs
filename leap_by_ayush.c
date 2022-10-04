#include<stdio.h>

    int main() {
int n;

printf("Enter the Year :\n");
scanf("%d",&n);

if((n%4==0) )
// && ((n%400==0) ||(n%100!=0)  ))
{
    printf("The Given year is Leap year !\n");
}
else {
    printf("The given year is not a leap year \n");
}
    return 0;
}