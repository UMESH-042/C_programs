// Q.Write a C program to interchange given Two Numbers

#include<stdio.h>

int main(){
    int x,y,temp;
    printf("Enter the first Number:\n");
    scanf("%d",&x);
    printf("Enter the second Number:\n");
    scanf("%d",&y);
    
    printf("\t The Numbers Before Interchange\t\n\n");

    printf(" The first Number is :%d\n",x);
    printf(" The second Number is :%d\n",y);
    temp=x;
    x=y;
    y=temp;

    printf("\t The Numbers After Interchange\t\n\n");
    printf(" The first Number is :%d\n",x);
    printf(" The second Number is :%d\n",y);
    return 0;
}