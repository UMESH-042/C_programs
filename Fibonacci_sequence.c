/*This Code is written by CHAUHAN UMESH RAMBAJ
Student ID:202151042
Date: 3/02/2022
we have to Write a C program to print Fibonacci series upto 100*/ 

#include<stdio.h>
#include<time.h>

    int main() {
//         double time_spent=0;
// clock_t begin = clock();

int n=10,n1=0,n2=1,n3;



printf("\n\nFibonacci Number upto 100 :\n");
 
    printf("%d  %d  ",n1,n2);// printing first and second term of fibonacci series  
    

for(int i=0;i<10;i++){

    n3=n2+n1;  //the term will be the sum of two preceding numbers
    printf("%d  ",n3); //printing the number
    n1=n2; //updating the value of n1 to n2 and n2 to n3 
    n2=n3;
}
// clock_t end = clock();
// time_spent = (double)(end - begin)/CLOCKS_PER_SEC;
printf("\n\n");
// printf("\nThe time elapsed in doing this process is %f seconds\n",time_spent);
    return 0;
}