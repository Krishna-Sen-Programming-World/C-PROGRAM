#include<stdio.h>
int main()
{
	int n;
	printf("Enter the range ");
	scanf("%d",&n);
	for(int i=1;i<=n-2;i++)
	{
		int f1=0,f2=0;
		for(int j=2;j<i;j++)
		{
			if (i%j==0)
			f1=1;
		}
		for(int j=2;j<i+2;j++)
		{
			if ((i+2)%j==0)
			f2=1;
		}
		if(f1!=1 && f2!=1)
		{
		printf("%d %d \n",i,i+2);
		i=i+2;
		}
	}
	return 0;
}
/* Twin Prime Nos
Enter the range 50
1 3
5 7
11 13
17 19
29 31
41 43 */