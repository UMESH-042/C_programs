// Q.Write a program to count the occurrence of a given
//  character in a string. 


#include<stdio.h>
int occurrence(char st[],char c){
        char *ptr=st;
        int count=0;
        while(*ptr!='\0'){
            if(*ptr==c){
                count++;
              
            }
            ptr++;
        }
        return count;

    }
int main(){
    char st[] = "Harry";
    int a = occurrence(st,'r');
    printf("occurrences = %d\n",a);    
    return 0;
}