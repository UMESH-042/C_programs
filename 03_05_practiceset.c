
/* Wirte a program to determine whether a character entered by a user 
  is lowercase or not*/

#include<stdio.h>

int main(){
    // 97-122 = a-z (In ASCII VALUE )
    char ch;
    printf("Enter the character :\n");
    scanf("%c",&ch);
    if(ch<=122  && ch>=97){
        printf("It is lowercase.\n");
    }
    else{
        printf("It is not lowercase.\n");
    }
    return 0;
}