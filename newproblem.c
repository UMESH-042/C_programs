#include<stdio.h>
#include<math.h>

int factorial(int x){

   // printf("calling factorial (%d)\n",x);
    if(x==1 || x==0){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}
    int main() {
        double n=6,sum=1;

        for(int k=1 ;k<=6;k++){

            sum=sum+(pow(n,k))/factorial(k);
            printf("sum at %d stage  %lf\n",k,sum);

        }
printf("sum = %lf",sum);
    return 0;
}