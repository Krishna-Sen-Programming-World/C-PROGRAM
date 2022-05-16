#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int a,b,c,input;
    char ll='h';
	printf("\n %c \n",ll);
    printf("Enter the no ");
    scanf(" %d",&input);
    printf("\n %d",input);
    a=1;
    b=1;
    c= --a && --b;
	printf("\n%d %d %d",a,b,c);
	int d=a-- && --b;
	printf("\n%d %d %d %d",a,b,c,d);
	return 0;
}