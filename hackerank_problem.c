#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        
        for(int j=0;j<(2*n-1);j++){
            printf("%d",n);
        }
        printf("\n");
        printf("%d",n);
        n--;
        printf("%d",n);
    }
    return 0;
}
