// Q7.Create an array of size 3 X 10 containing multiplication Tables of the 
// number 2,7 and 9 respectively.
                        // Doubt!
#include<stdio.h>                   

    void printTable(int*mulTable,int num,int n){

    for(int i=0; i<n; i++){
    mulTable[i]=num*(i+1) ;
    printf("\t\t\t%d X %d = %d\n",num,i+1,mulTable[i]);
    }


    }

int main(){
        int mulTable[3][10];
        printf("\t\t\tTable of 2\n\n");
        printTable(mulTable[0],2,10);
        printf("\t\t\tTable of 7\n\n");
        printTable(mulTable[1],7,10);
        printf("\t\t\tTable of 9\n\n");
        printTable(mulTable[2],9,10);
       
    return 0;
}