#include<stdio.h>

int main(){
    

    double t;
    float a;
    double s;
    s=(a*t*t)/2;

    printf("Enter the value of Acceleration:\n");
    scanf("%f",&a);
    printf("Enter the value of time(t):\n");
    scanf("%lf",&t);

    printf("The value of diatance is %lf\n",s=(a*t*t)/2);
    return 0;
}