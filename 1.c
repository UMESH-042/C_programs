#include<stdio.h>

int main(){
    int n;
    int i;
    printf("Give Integer Number:\n");
    scanf("%d",&n);
    while(n!=0){

        i=n%10;
        printf("%d\n",i);
        n=n/10;
    }
    return 0;
}