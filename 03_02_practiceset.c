#include<stdio.h>

int main(){
    int physics,chemistry,maths;
   float total=(physics+chemistry+maths)/3;
    printf("Enter physics marks:\n");
    scanf("%d",&physics);
 printf("Enter chemistry marks:\n");
    scanf("%d",&chemistry);
     printf("Enter maths marks:\n");
    scanf("%d",&maths);
     
     if((total<40) || physics<33 ||chemistry<33 ||maths<33 ){
         printf("Your are fail");

     }
else{
    printf("Your are pass, Congratulations!\n");
    printf("Your percentage is :%f\n", total=(physics+chemistry+maths)/3);
}
      return 0;
}