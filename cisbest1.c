/*This Code is written by CHAUHAN UMESH RAMBAJ
Student ID:202151042
Date: 12/03/2022
we have to C program to print the  pattern C IS BEST, using a user defined function. */ 


#include<stdio.h>


 void C_is_best(){
for(int i=0;i<7;i++){
for(int i=0;i<7;i++){

    for(int j=i;j<=7;j++){
        printf("\t");
    }
    if(i==0){
        printf("\tC");
    }
    if(i==1){
        printf("\ti");
        for(int c=1;c<=2*i-3;c++){
            printf("\t");
        }
        printf("\ti");
    }
    if(i==2){
        printf("\ts");
        for(int c=0;c<=2*i-3;c++){
            printf("\t");
        }
        printf("\ts");
    }
    if(i==3){
        printf("\tb");
        for(int c=0;c<2*i-3;c++){
            printf("\t");
        }
        printf("\tb");
    }
    if(i==4){
        printf("\te");
        for(int c=0;c<2*i-3;c++){
            printf("\t");
        }
        printf("\te");
    }
    if(i==5){
        printf("\ts");
        for(int c=0;c<2*i-3;c++){
            printf("\t");
        }
        printf("\ts");
}
if(i==6){
        printf("\tt");
        for(int c=0;c<2*i-3;c++){
            printf("\t");
        }
        printf("\tt");
}
printf("s\te\tb\ts\ti\tC\ti\ts\tb\te\ts");
printf("\n");
}
}
}
    int main() {
 C_is_best();
    return 0;
}