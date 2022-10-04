#include<stdio.h>

    int main() {

        int a[3][3],i,j,b[3][3];
        printf("Enter the elements of first Matrix\n");
        for(i=0;i<3;i++){

            for(j=0;j<3;j++){
                printf("Enter the elements [%d][%d]\n",i,j);
                scanf("%d",&a[i][j]);
            }
        }

        printf("The matrix is \n");
            for(i=0;i<3;i++){
                    for(j=0;j<3;j++){
                        printf("%d\t",a[i][j]);
                    }
                    printf("\n");
            }
printf("Enter the elements of second Matrix\n");
        for(i=0;i<3;i++){

            for(j=0;j<3;j++){
                printf("Enter the elements [%d][%d]\n",i,j);
                scanf("%d",&b[i][j]);
            }
        }

        printf("The matrix is \n");
            for(i=0;i<3;i++){
                    for(j=0;j<3;j++){
                        printf("%d\t",b[i][j]);
                    }
                    printf("\n");
            }

printf("The multiplication of the both Matrix is \n");

for(i=0;i<3;i++){
    for(j=0;i<3;j++){
        printf("%d\t",(a[i][j]*b[i][j]) + (a[i][j+1]*b[i+1][j])+ a[i][j+2]*b[i+2][j]);
    }
}

    return 0;
}