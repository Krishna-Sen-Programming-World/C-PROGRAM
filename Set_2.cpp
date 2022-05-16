#include<stdio.h>
int main()
{
	int n,n1=0;
	scanf("%d",&n);
	int c=0;
	for(int i=n;i>0;i=i/10)
	{
		n1=(n1*10)+(i%10);
	}
		printf("\n%d",n1);
	for(int i=n1;i>0;i=i/10)
	{
		printf("\n%d",(i%10));
		c++;
	}
	printf("\n%d",c);
	return 0;
}