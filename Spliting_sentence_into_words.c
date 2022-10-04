#include<stdio.h>
#include<string.h>
    int main() {
 
 char s[100];

 scanf("%[^\n]%*c",s);

 printf("%s",s);

 for (int  i = 0; i <s[i]!='\0'; i++)
 {
     if(s[i]==' '){
         printf("%s \n",s[i]);
     }
 }
 

 


    return 0;
}