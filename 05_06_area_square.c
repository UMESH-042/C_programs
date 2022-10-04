// Use the library functions to calculate the area of asquare with side 'a'.

#include<stdio.h>
#include<math.h>
int main(){
 int side;

 printf("Enter the side of Square :\n");
 scanf("%d",&side);

printf("The value of Area and side is :%.02f  and %f\n respectively",pow(side,2),sqrt(pow(side,2))); //pow function returns double that's why %f 
    return 0;
}