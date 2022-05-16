#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int i1=1;i1<=(n-i);i1++)
		printf(" ");
		for(int i2=1;i2<=i;i2++)
		printf("%d",i2);
		
		printf("\n");
	}
	return 0;
}