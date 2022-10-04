// Q.Repeat problem 7 for a custom input given by the user 
#include<stdio.h>
    int PrintTable(int*mulTable,int num,int n){
        for(int i=0; i<n ; i++){
            printf("%d X %d = %d\n",num,i+1,mulTable[i]=num*(i+1));
        }
    }
int main(){
    int a,b;
    int c,d,e;

    printf("Enter the total numbers of tables to be printed\n");
    scanf("%d",&a);
    printf("Enter the total numbers of lines to be printed\n");
    scanf("%d",&b);
    printf("Enter the numbers whose Table is to be printed\n");
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    int mulTable[3][2];
    PrintTable(mulTable[0],c,b);
    PrintTable(mulTable[1],d,b);
    PrintTable(mulTable[2],e,b);
    return 0;
}