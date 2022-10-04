#include <stdio.h>

int patternPrint(char str[], int len, int m, int i);
int main()
{
    char str[] = "Cisbest";
    int len = sizeof(str)-1;
    int m = (2*len - 1)/2;
    int i = 0;
    patternPrint(str, len, m, i);
    
    return 0;
}

int patternPrint(char str[], int len, int m, int i){
    
    if(i == len-1){
        printf("tsebsiCisbest\n");
        return 0;
    }
    for(int j = 0; j < 2*len-1; j++){
        
        if(j == m+i || j == m-i){
            printf("%c",str[i]);
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
    patternPrint(str, len, m, i+1);
}
 