#include <stdio.h>
#include <string.h>
int main()
{
int j=6;
    for (int i = 0; i <= 6; i++)
    {
        for (int j = 6; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            if (j == 6)
            {
                printf("C");
            }else if(j==5){
                printf("i");
            }else if(j==4){
                printf("s");
            }else if(j==3){
                printf("b");
            }else if(j==2){
                printf("e");
            }else if(j==1){
                printf("s");
            }
        }
        printf("\n");
        j--;
    }
    return 0;
}