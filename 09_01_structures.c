#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    int a=34;
    char b='g';
    float d=234.455;
    // employee e1;
    // e1.salary =34; ---> wont work without structures
    struct employee e1;
    e1.code = 100;
    e1.salary = 234.455;
    // e1.name = "Harry";---> wont work
    strcpy(e1.name,"Umesh");
    printf("%d\n",e1.code);
    printf("%0.3f\n",e1.salary);
    printf("%s\n",e1.name);
        return 0;
}