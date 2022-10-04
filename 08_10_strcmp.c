// strcmp()
// This function is used to compare two strings 
// It returns 0 if string are equal 
// Negative value if first string's mismatching character's ASCII
// value is not greater the second string's corresponding character.
// It returns positive values otherwise.

#include<stdio.h>
#include<string.h>

int main(){
    char st1[45]="Hello";
    char *st2="Umesh";
    int val = strcmp(st1,st2);
    printf("The difference between two string is %d\n",val);
    return 0;
}