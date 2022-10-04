#include<stdio.h>
#include<string.h>
int main(){
    char *st ="This";
    char st2[45];
    strcpy(st2,st);//st2 become st by using this function.
    printf("Now the st2 is %s\n",st2);
    return 0;
}