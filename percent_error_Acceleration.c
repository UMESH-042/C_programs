#include<stdio.h>

int main(){
    double Acc,Cal_Acc;

    double percent_error;

   
    percent_error =((Acc-Cal_Acc)*100)/(Cal_Acc);

    printf("Enter the value of Acceleration Calculated Practically:\n");
    scanf("%lf",&Acc);

    printf("Enter the value of Acceleration Calculated :\n");
    scanf("%lf",&Cal_Acc);

    printf("The percentage Error in the value of the Acceleration is \n %lf \n", ((Acc-Cal_Acc)*100)/(Cal_Acc));
    return 0;
}