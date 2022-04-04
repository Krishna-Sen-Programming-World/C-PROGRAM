#include<stdio.h>
int main()
{
	int n;
	printf("Enter The limit ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int k=2;
		for(int j=1;j<=i;j++)
		{
			printf("%d ",k);
			k=k+2;
		}
		printf("\n");
	}
	for(int i=n-1;i>=1;i--)
	{
		int k=2;
		for(int j=1;j<=i;j++)
		{
			printf("%d ",k);
			k=k+2;
		}
		printf("\n");
	}
	return 0;
}
/*
Enter The limit 5
2
2 4
2 4 6
2 4 6 8
2 4 6 8 10
2 4 6 8
2 4 6
2 4
2	*/