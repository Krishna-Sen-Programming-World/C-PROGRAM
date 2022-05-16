#include<stdio.h>
int main()
{
	char m[3];
	for(int i=0;i<3;i++)
	{
		scanf("%c",&m[i]);
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3-1-i;j++)
		{
			if(m[j]>m[j+1])
			{
				int temp=m[j];
				m[j]=m[j+1];
				m[j+1]=temp;
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		printf("%c\t",m[i]);
	}
	return 0;
}