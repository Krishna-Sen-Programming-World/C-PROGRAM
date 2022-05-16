#include<stdio.h>
int main()
{
	char m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int y,m1,m2,count=0;
	scanf("%d%d%d",&y,&m1,&m2);
	if(y%4==0 && (y%100!=0 || y%400 ==0))
		m[1]={29};
	for(int i=m1;i<m2;i++)
	{
		count=count+m[i-1];
	}
	printf("%d",count);
	return 0;
}