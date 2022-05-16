#include<stdio.h>
int main()
{
	int n,d;
	scanf("%d %d",&n,&d);
	int c=0;
	for(int i=n;i>0;i=i/10)
	{
		if(i%10==d)
		c++;
	}
	printf("%d",c);
	return 0;
}