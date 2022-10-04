#include<stdio.h>

int main(){
    
    char str[] = {'U','m','e','s','h','\0'};

    char *ptr = str;
    while(*ptr!='\0'){
        printf("%c\n",*ptr);
        ptr++;
    }
    return 0;
}