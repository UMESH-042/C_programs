#include<stdio.h>

    int main() {

        int num,n1,rev=0;
        printf("Enter the Number :\n");
        scanf("%d",&num);

        while(num!=0){

            n1 = num%10;
            rev=(rev*10)+n1;
            num=num/10;
        }
        printf("Reverse of the given Number is  %d\n",rev);

    return 0;
} 