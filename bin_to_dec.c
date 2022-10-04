/*This Code is written by CHAUHAN UMESH RAMBAJ
Student ID:202151042
Date: 28/01/2022
we have to convert the Binary number given  by the user into Decimal number */ 

#include<stdio.h>
#include<math.h>    
    int main() {

        int n,n1,i=0,num=0;//Declaring variables and assinging value 

        printf("Enter a Binary number:\n");
        scanf("%d",&n); //Taking Input from the user
        printf("The Binary number entered  is : %d\n",n);//printing Given Binary number
    //Using while loop
        while(n>0){

            n1=n%10;

            num=num+n1*pow(2,i);
            i++;//Incrementing i
            n=n/10; 
        }
printf("The equivalent Decimal number of given Binary number is %d",num);   //printing the Decimal Number     
    return 0;
}