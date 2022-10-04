#include<stdio.h>

int main(){
    
    double u=0.002;
    int m,M;
    float g=9.8;
    double a=((m-(u*M))*g)/(m+M);

    printf("Enter the value of m:\n");
    scanf("%d",&m);
     printf("Enter the value of M:\n");
    scanf("%d",&M);
    
    printf("The calculated value of Accelration is :\n %lf \n",a=((m-(u*M))*g)/(m+M));
    return 0;
}