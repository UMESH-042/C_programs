#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[10];
    char sen[30];
    
    scanf("%c",&ch);
    scanf("\n");
    
    scanf("%s",s);
    scanf("\n");
    
    scanf("%[^\n]%*c",sen);
    
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);
    
    
    
    return 0;
}
