#include<stdio.h>
#include<string.h>
struct employee {
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee facebook[100];
    facebook[0].code =100 ;
    facebook[0].salary = 100.45;
    strcpy(facebook[0].name,"Harry"); 
    
    
    struct employee facebook[100];
    facebook[1].code =103 ;
    facebook[1].salary = 102.45;
    strcpy(facebook[1].name,"Umesh"); 
    
    
    struct employee facebook[100];
    facebook[2].code =110 ;
    facebook[2].salary = 110.45;
    strcpy(facebook[2].name,"Rahul"); 
    
    return 0;
}