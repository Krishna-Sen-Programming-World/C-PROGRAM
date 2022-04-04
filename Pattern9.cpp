#include<stdio.h>
int main()
{
	int s=1,s1=0,n;
	printf("Enter the limit ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			for(int j=1;j<=i;j++)
			{
				printf("%d ",s);
				s=s+1;
			}
		}
		else
		{
			int k=s+i-1;
			for(int j=1;j<=i;j++)
			{
				printf("%d ",k);
				k--;
				s=s+1;
			}
		}
		printf("\n");
	}
	return 0;
}
/*
Enter the limit 5
1
3 2
4 5 6
10 9 8 7
11 12 13 14 15	*/