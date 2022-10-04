/* Q1 :
Write a C program that reads a signed integer from the user and then to print it in reversed order. By
using FOR loop only. The program should also print if the given number is a positive/negative and
even/odd number or zero. The expected output is as shown below:
Enter an Integer : -12345
The number is a Negative odd number
The number in the reversed order is : -54321 */
#include <stdio.h>

int main()
{
    int n,n1,rem=0;
    printf("Enter an Integer : ");
    scanf("%d", &n);

    if (n > 0)
    {
        if (n % 2 != 0)
        {
            printf("\nThe number is Positive Odd number");
        }
        else if (n % 2 == 0)
        {
            printf("\nThe number is positive Even number");
        }
    }
    else if (n < 0)
    {
        if (n % 2 != 0)
        {
            printf("\nThe number is Negative Odd number");
        }
        else if (n % 2 == 0)
        {
            printf("\nThe number is Negative Even number");
        }
    }
    for(int i=0;n!=0;i++){
        n1=n%10;
        rem=rem*10+n1;
        n=n/10;
    }
    printf("\nThe number in the reversed order is : %d",rem);

return 0;
}