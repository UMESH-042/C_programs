#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long int a[5]={20,31,46,55,13};
    long int L,R,n,t,count=0;
    scanf("%ld",&t);
    scanf("\n");
    scanf("%ld",&n);
    scanf("\n");
    scanf("%ld %ld %ld %ld %ld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    scanf("\n");
    scanf("%ld %ld",&L,&R);
    
    for(int j=1;j<=n;j++){
        
        for(int i=1;i<j;i++){
            if((a[i]%2==0 && a[j]%2==0 )||(a[i]%2!=0 && a[j]%2!=0)){
                if((j-i-1)%2==0){
                    count++;
                }
            
            }else if((a[i]%2!=0 && a[j]%2==0) || (a[i]%2==0 && a[j]%2!=0 )){
                if ((j-i-1)%2!=0){
                 count++;
                }
            }
                     
        
    
                     }
    }
    printf("%ld",count);
    
    return 0;
}
