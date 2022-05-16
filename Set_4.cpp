#include<stdio.h>
int main()
{
	int s=1,s1=0,n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<i;j++)
		{
		s=s+j;
		}
		s1=s1+s;
		s=1;
	}
	printf("\n%d",s1);
	return 0;
}