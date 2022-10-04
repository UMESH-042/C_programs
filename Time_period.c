#include<stdio.h>
 #define PI 3.14
    int main() {

        double T,k;
        int m;
         printf("Enter the value of T:\n");
         scanf("%lf",&T);

         printf("Enter the value of Mass:\n");
         scanf("%d",&m);

            k=(4*PI*PI*m)/(T*T*10);

            printf("The value of the spring constant is %lf\n",k);
         

    return 0;
}