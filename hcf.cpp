#include<stdio.h>
#include<math.h>
int main()
{ int num1,num2;
 printf("enter the first number:");
 scanf("%d",&num1);
 printf("enter the 2nd number:");
 scanf("%d",&num2);
  printf("\n GCD OF THE TWO NUMBERS %d AND %d is =",num1,num2);
 while(num1!=num2)
 {
 	if(num1>num2)
 	num1=num1-num2;
 	else
 	num2=num2-num1;
 }
printf("%d \n",num1);
return 0;
}