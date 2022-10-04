#include<stdio.h>

    int main() {

        int num,n1,n2,r1,r2,N;

        printf("Enter the Number:\n");
        scanf("%d",&num);

        if(num<1000){

            n1=num%10;
            r1=num/10;
            n2=r1%10;
            r2=r1/10;
            N=(n1*100)+(n2*10)+(r2*1);

            // For One Digit Number           
           if(r1==0){
                printf("The reverse of %d is %d\n",num,num);
           }// For Two Digit Number
            else if(r1==n2){
                printf("The reverse of %d is %d%d\n",num,n1,n2);

           }// For Three Digit Number
            else {
                printf("The reverse of %d is %d\n",num,N);
           }
            } 

    return 0;
}   