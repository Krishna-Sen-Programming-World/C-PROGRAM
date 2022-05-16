#include <stdio.h>
int fncall()
{
	int num,sum=0;
  	printf("Enter an integer\n");
   	scanf("%d", &num);
   	while (num != 0)
   	{
    	int temp = num % 10;
    	sum = sum + temp;
    	num  = num / 10;
    }
    return sum;
}
int main()
{
	int k;
	k=fncall();
    printf("Sum of digits is = %d\n",k);
	return 0;
}