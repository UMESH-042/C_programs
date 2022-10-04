#include<stdio.h>
#include<time.h>

int Fibonacci(int n){
    if(n==1 || n==2){
        return 1;
    }else{
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
}

    int main() {
double time_spent=0;
clock_t begin = clock();
        int x;
        printf("Enter the Number:\n");
        scanf("%d",&x);
        printf("%d\n",Fibonacci(x));
clock_t end = clock();
time_spent = (double)(end - begin)/CLOCKS_PER_SEC;

printf("\nThe time elapsed in doing this process is %f seconds\n",time_spent);
    return 0;
}