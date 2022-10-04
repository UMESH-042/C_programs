#include <stdio.h>

void update(int *a,int *b) {
    int t;
    t=(*a)+(*b);

    if((*a)>(*b)){

    (*b)=t-(2*(*b));

    }
        else if((*b)>(*a)){
        (*b)=(2*(*b))-t;
    }
        (*a)=t;
    
}
  

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d",&a);
    scanf("\n");
    scanf("%d",&b);
    
    
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
