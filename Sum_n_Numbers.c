#include<stdio.h>

    int main() {
    int n,sum=0,i=0;
    printf("Enter the Number:\n");
    scanf("%d",&n);

    while(i<=n){
            sum=sum+i;
            i++;
    }
printf("Total is %d",sum);

    return 0;
}