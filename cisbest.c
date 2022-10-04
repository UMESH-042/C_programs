#include<stdio.h>
#include<string.h>

    int main() {
char s[]="cisbest";
 int l=strlen(s);
for(int i=0;i<l;i++){
    for(int j=0;j<i;j++){
        printf("  ");
    }
    for(int j=0;j<2;j++){
        printf("    %c\n",s[i]);
    }
}
    return 0;
}