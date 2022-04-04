#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	printf("Enter the limit ");
	scanf("%d",&a);
	int c=1,d=1;
	for(int i=a;i>=1;i--)
	{
		for(int i1=1;i1<=i;i1++)
		{
			printf("%d",c);
			c=c+2;
		}
		d=d+2;
		c=d;
		printf("\n");
	}
	return 0;
}
/*
Enter the limit 5
13579
3579
579
79
9	*/