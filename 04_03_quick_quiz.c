/*  #include<stdio.h>

int main()
{
int i=10;

while(i<=20){

    if(i >=10){
        printf("The value of i is %d\n",i);
    }
i++;//i=i+1

}


return 0;

}*/


/*write a program to print first n natural numbers using 
do-while loop 
input : 4
output: 1
        2
        3
        4
        
*/

       #include<stdio.h>
       int main(){
           int a;
           printf("Enter the value : \n");
           scanf("%d",&a);
       do{
           printf("The output is :%d \n",a);
           a++;
       }
       while(a<10);
       
       return 0;
       
       }

