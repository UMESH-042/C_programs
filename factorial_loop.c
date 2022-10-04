#include<stdio.h>

    int main() {

    int n;
    long long fact=1;
    // printf("Enter the Number:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;

    }
    printf("%d\n",fact);

    return 0;
}