#include<stdio.h>
int main()
{
	int a;
	printf("Enter the limit ");
	scanf("%d",&a);
	int count=1;
	for(int i=1;i<=a;i++)
	{
		for(int c=1;c<=i;c++)
		{
			printf("%d",count++);
		}
		printf("\n");
	}
	return 0;
}

/*
Enter the limit 4
1
23
456
78910	*/