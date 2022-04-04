#include <stdio.h>
int main()
{
   int num, temp, sum = 0;
   printf("Enter an integer\n");
   scanf("%d", &num);
   while (num != 0)
    {
      temp = num % 10;
      sum = sum + temp;
      num  = num / 10;
     }
   printf("Sum of digits is = %d\n",sum);
   return 0;
}