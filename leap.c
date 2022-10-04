/*This Code is written by CHAUHAN UMESH RAMBAJ
Student ID:202151042
Date: 12/02/2022
We have to check whether the given year is leap year or not */


#include<stdio.h>
void Leap_Year(int n){
    if(n<1752){
    printf("No leap year before 1752 \n");
}
else if((n%4==0) && ((n%400==0) ||(n%100!=0)  )){
    printf("The Given year is Leap year !\n");
}
else {
    printf("Given year  is not a leap year\n");
}
    
}

    int main() {
int n;

printf("Enter the Year :\n");
scanf("%d",&n);
Leap_Year(n);
    return 0;
}