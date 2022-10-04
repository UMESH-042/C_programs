#include <stdio.h>
int maxoffour(int a,int b,int c,int d){
    if(a>b){
        if(b>c){
            if(c>d){
                printf("%d",a);
            }
        }
        else{
            if(a>c){
                if(a>d){
                    printf("%d",a);
                    
                }
                else{
                    printf("%d",d);
                }
                }
            }
        }
        else{
            if(b>a){
                if(b>c){
                    if(b>d){
                        printf("%d",b);
                    }
                    else{
                        printf("%d",d);
                    }
                    
                }
                
            }else{
                if(c>d){
                    printf("%d",c);
                }else{
                     printf("%d",d);
                }
            }
        }
}

  
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = maxoffour(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}