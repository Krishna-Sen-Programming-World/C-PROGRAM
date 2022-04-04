#include<stdio.h>
int main()
{
	int a;
	printf("Enter the limit ");
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		for(int c=1;c<=a-i;c++)
		printf(" ");
		for(int c=1;c<=i;c++)
		printf("%d",c);
		printf("\n");
	}
	return 0;
}
/*
Enter the limit 6
     1
    12
   123
  1234
 12345
123456   */