#include<stdio.h>

int main(){
     int a;
     printf("Enter the value :\n");
     scanf("%d",&a);
    
     for( a; a<100; a++){
printf("The output is :%d\n",a);
if(a==79){
    break;
}

     }
    return 0;
}