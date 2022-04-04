#include<stdio.h>
int main()
{
	printf("Enter the limit ");
	int n,k=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int a=k;
		for(int j=n;j>=i;j--)
		{
			printf("%d ",a);
			a=a+2;
		}
		printf("\n");
		k=k+2;
	}
	return 0;
}
/*
Enter the limit 5
1 3 5 7 9
3 5 7 9
5 7 9
7 9
9	*/