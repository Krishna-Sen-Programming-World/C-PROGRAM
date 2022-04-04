#include<stdio.h>
int main(void)
{
	printf("Enter The 3 nos \n");
	int a,b,c;
	a=-1;
	b=-2;
	c=-1;
	int max=a;
	if(a>=b && a>=c)
	max=a;
	else if(b>=a && b>=c)
	max=b;
	else
	max=c;
	printf("The greatest of 3 nos is\n%d",max);
}