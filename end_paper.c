#include<stdio.h>

    int main() {
        int n;
        scanf("%d",&n);
int arr[n][n];
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        arr[0][j]=1;
        
    }
}
    return 0;
}