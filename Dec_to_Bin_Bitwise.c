/*This Code is written by CHAUHAN UMESH RAMBAJ
Student ID:202151042
Date: 2/03/2022
we have to write a C program to display the stored binary equivalent of a given signed integer on the screen ,using Bitwise operator*/ 
#include <stdio.h>

int main()
{
  int n, c, result;

  printf("Enter a Decimal Integer number :\n");
  scanf("%d", &n);

  for (c = 31; c >= 0; c--)
  {
    result = n >> c;

    if (result & 1)
      printf("1");
    else
      printf("0");
  }

  printf("\n");

  return 0;
}
