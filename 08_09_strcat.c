#include<stdio.h>
#include<string.h>
int main(){
    char st1[45] = "Hello";
    char *st2 = "Umesh";
    strcat(st1,st2);//This function joins the two string.(without giving space)
    printf("Now the st1 is %s\n",st1);
    return 0;
}