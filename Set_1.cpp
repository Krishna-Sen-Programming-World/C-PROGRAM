#include<stdio.h>
int main()
{
	float n;
	scanf("%f",&n);
	float c=0,d=1;
	for(int i=1;i<=n;i++)
	{
		if(i%2 != 0)
		c=c+(4/d);
		else
		c=c-(4/d);
		d=d+2;
	}
	printf("%f",c);
	return 0;
}