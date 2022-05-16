#include<math.h>
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the  digits \n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	int max=a;
	max=(a>b?(a>c?a:c):b);
	max=(b>a?(b>c?b:c):a);
	max=(c>b?(c>a?c:a):b);
	printf("the max is %d",max);
	return 0;
}