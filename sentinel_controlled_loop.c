#include <stdio.h>
int main()
{
int guard = 0;
int cnt = 0;
float marks;
float sum = 0;
float aver;
while (guard != -1)
{
printf("Enter the marks \n");
scanf("%f", &marks);
printf("The Marks Entered are %f\n",marks);

sum = sum + marks;
cnt = cnt + 1;
printf("The sum is : %f \n", sum);
printf("The count is : %d \n", cnt);
printf("enter any integer to continue else -1 to end \n");
scanf("%d", &guard);
}
aver = sum / cnt;
printf("The average of %d marks is : %f \n", cnt, aver);

return 0;


}