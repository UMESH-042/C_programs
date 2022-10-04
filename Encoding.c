#include<stdio.h>

void encrypt(char *c){
            char *ptr=c;
            while(*ptr!='\0'){
                *ptr = *ptr +1;
                ptr++;
            }

    }

    int main() {
        char c[40];
        printf("Enter your Message\n");
        scanf("%[^\n]%*c",c);

        // for(int i=0;)

//  printf("%d\n",c);
// encrypt(c);
        // printf("%c\n",c);
// printf("Encrypted String is: %s\n",c);

        int a[10][10],b[10][10];
        
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                b[i][j]=i+j;
                printf("%d ",b[i][j]);
                
            }
            printf("\n");
        }


    return 0;
}