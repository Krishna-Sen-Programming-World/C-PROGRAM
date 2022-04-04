#include<stdio.h>
int main()
{
	int a,ch;
	scanf("%d",&a);
	if(a<=20)
	ch=1;
	else if(a>20 && a<=30)
	ch=2;
	else 
	ch=3;	
	switch(ch)
	{
		case (1):
		{
			printf("1");
			break;
		}
		case (2):
		{
			printf("2");
			break;
		}
		default:
		{
			printf("3");
		}
	}
	return 0;
}