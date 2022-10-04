#include<stdio.h>
#include<math.h>

    int main() {
        double dB,Vout,x;

    printf("Enter the value of dB:\n");
    scanf("%lf",&dB);
        x=pow(10,(dB/20));
    Vout=10*x;

    printf("The value of Vout is %lf\n",Vout);


    return 0;
}