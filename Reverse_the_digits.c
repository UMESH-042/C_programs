#include<stdio.h>

    int main() {

    int num,n1,n2,r1,r2;

    printf("Enter the 3-digit Number:\n");
    scanf("%d",&num);

    n1=num/10;
    n2=n1/10;
    r1=num%10;
    r2=n1%10;
   
    printf("%d%d%d\n",r1,r2,n2);



    return 0;
}
