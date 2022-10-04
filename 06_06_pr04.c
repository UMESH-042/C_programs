
/*Write a program to using a function which calculate the sum and average
of two numbers. Use pointers and print the value of sum and average in main()*/  
#include<stdio.h>
 void sumAndAvg(int a, int b, int *sum, float *avg){
     *sum=a+b;
     *avg=(float)(*sum)/2;
    
 }
     
     int main(){
     int i,j,sum;
     float avg;
    printf("Enter the  first number:\n"); 
    scanf("%d",&i);
    printf("Enter the  second number:\n",j); 
    scanf("%d",&j);   
    sumAndAvg(i,j, &sum, &avg);
    printf("The value of sum is %d \n",sum);
    printf("The value of avg is %f \n",avg);
         return 0;
     }




