#include<stdio.h>
int main()
{
	int a;
	printf("Enter the limit ");
	scanf("%d",&a);
	char d='*';
	for(int i=1;i<=a;i++)
	{
		for(int c=1;c<=i;c++)
		printf("%c",d);
		printf("\n");
	}
	return 0;
}
/*
Enter the limit 9
*
**
***
****
*****
******
*******
********
*********	*/