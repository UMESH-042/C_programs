/* Write a program to check whether a given number is
 prime or not ,using loops*/
 #include<stdio.h>
 
 int main(){
     /*prime numbers= A prime number (or a prime) is a natural number greater
     than 1 that is not a product of two smaller natural numbers.*/  
     //Disclaimer :This is not the best method to solve this problem
   int n, prime=1;
   printf("Enter the Number: \n");
   scanf("%d",&n);

   for(int i=2;i<n;i++){
       if(n%i==0){
          prime= 0;
           break;
       }
   }
    if(prime==0){
printf("This  not a prime Number\n");
   }
else{
    printf("This is a prime Number\n");
}
     return 0;
 }