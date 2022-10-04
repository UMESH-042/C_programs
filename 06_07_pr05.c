/* write a program to print the value of a variable i by using 'pointer to pointer'
type of variable.*/
#include<stdio.h>

int main(){
    int i=2;
    int *ptr=&i;// int *j=&i;
    int **ptr_ptr=&ptr; // int **k=&j;
    printf("The value of i is %d\n",**ptr_ptr);
    /*printf("The value of i is %d\n",*j);
    printf("The value of i is %d\n",*(&i));
    printf("The value of j is %d\n",j);
    printf("The value of j is %d\n",*k);
    printf("The value of j is %d\n",*(&j));
    printf("The value of j is %d\n",*(&j));
    printf("The value of k is %d\n",k);
    printf("The value of k is %d\n",&j);*/
    return 0;
}
