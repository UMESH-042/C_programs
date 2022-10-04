// Q.Write a program to Decrypt a string by subtracting 1 to the 
// ASCII value of its characters.


#include<stdio.h>
        void decrypt(char *c){
            char *ptr=c;
            while(*ptr!='\0'){
                *ptr = *ptr - 1;
                ptr++;
            }

    }
int main(){
    char c[] = "dpnf!up!nz!sppn";
    decrypt(c);
    printf("Decrypted String is: %s\n",c);
    return 0;
}