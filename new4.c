#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    int a;
    scanf("%d\n",&a);
    double b;
    scanf("%lf\n",&b);
    char st[40];
    scanf("%[^new5]",st);
    
    printf("%d\n",i+a);
    printf("%lf\n",d+b);
  strcat(s, st);
  printf("%s",s);
    
    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}