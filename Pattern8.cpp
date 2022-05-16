#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int k=i;
		for(int j=1;j<=i;j++)
		{
			if(k%2!=0)
			printf(" * ");
			else
			printf(" $ ");
			k++;
		}
		printf("\n");
	}
	return 0;
}