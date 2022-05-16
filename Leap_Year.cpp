#include<stdio.h>
int main()
{
	int n1,n2;
	scanf("%d %d",&n1,&n2);
	for(int i=n1;i<=n2;i++)
	{
		if(i%4==0 && (i%100!=0 || i%400 ==0))
		printf("%d\n",i);
	}
	return 0;
}