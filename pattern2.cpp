#include<stdio.h>
int main()
{
	int a;
	printf("Enter the limit ");
	scanf("%d",&a);
	int d=1;
	for(int i=1;i<=a;i++)
	{
		for(int c=1;c<=i;c++)
		printf("%d",d);
		d++;
		printf("\n");
	}
	return 0;
}
/*
Enter the limit 6
1
22
333
4444
55555
666666 */