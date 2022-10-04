#include<stdio.h>

int main(){
     char s[34];
    printf("Enter Your Name:");
    gets(s); // The entered string is stored in s!
    puts(s);//Prints the string and places the cursor on the next line
    // printf("Your name is %s\n",s);
   
    return 0;
}