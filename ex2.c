#include<stdio.h>

    int main() {
int grade;
printf("Enter your Grade:\n");
scanf("%d",&grade);

printf( "%s\n", grade >= 60 ? "Passed" : "Failed" );
    return 0;
}