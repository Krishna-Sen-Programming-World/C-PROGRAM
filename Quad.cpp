#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("Enter the equation \n");
	scanf("%f%f%f",&a,&b,&c);
	float c2=pow(b,2);
	float d=4*a*c;
	float c1=2*a;
	float r1=((-b)+sqrt(c2-d))/c1;
	float r2=((-b)-sqrt(c2-d))/c1;
	printf("The root is %f %f",r1,r2);
	return 0;
}