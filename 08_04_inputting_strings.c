#include<stdio.h>

int main(){
    char s[34];
    printf("Enter Your Name:");
    scanf("%[^\n]%*c",s); // scanf("%s",&s[]); 
    //or scanf("%s",s);
    
    printf("Your name is %s\n",s);
   
    return 0;
}