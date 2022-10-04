#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    scanf("%c\n",&ch);
    char s[35];
    scanf("%s\n",s);
    char sen[35];
    scanf("%s\t", sen);
    char st[35];
    scanf("%s\t",st);
    char lt[35];
    scanf("%s\t",lt);
    char ft[30];
    scanf("%s",ft);
    
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s %s %s %s",sen,st,lt,ft);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}