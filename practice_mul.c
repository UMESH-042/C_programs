// Q.Printing Multiplication Table of given Number. 
#include<stdio.h>

int main(){
    int mul[10];
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
     printf("Multiplication Table of %d\n",n);
    for(int i=0; i<10;i++){
        
        printf("%d X %d = %d\n ",n,i+1,mul[i]=n*(i+1));
    }
    return 0;
}