#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("Enter the square digits if x^2 , x and c respectively\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("The equation is %d x^2 + %d x + %d \n",a,b,c);
	int d=(((-b)+sqrt((b*b)-(4*a*c)))/(2*a));
	int e=(((-b)-sqrt((b*b)-(4*a*c)))/(2*a));
	printf("the square root is %d %d",d,e);
	return 0;
}