// Q.Write a program to check whether a given Character is
//  present in a string or not.
#include<stdio.h>
char CheckOccurrence(char st[],char c){
    char *ptr=st;
    while(*ptr!='\0'){
        if(*ptr==c){
           printf("Yes This Character Exist\n");
         }//else {
        //      printf("No,This Character Does Not Exist\n");
        // }
         ptr++;
    }
   return 0;
}
int main(){
    char st[]="Umesh";
    // CheckOccurrence(st,'a');
    printf("%d\n",CheckOccurrence(st,'U'));
    return 0;
}

// If It Returns 0 only ,Then It represents that the Given Character 
// Does not Exists in the Given string.