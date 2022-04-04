#include<stdio.h>
#include<math.h>
int main()
{ int num1,num2;
 printf("enter the first number:");
 scanf("%d",&num1);
 printf("enter the 2nd number:");
 scanf("%d",&num2);
int min=(num1<num2?num1:num2);
int gcd=(num1==min?num2:num1);
 for(int i=min;i>0;i--)
 { if(num1%i==0 && num2%i==0)
 {
 gcd=i;
 break;
}
 }
 int lcm=(num1*num2)/gcd;
printf("GCD OF THE TWO NUMBERS %d AND %d is = %d \n",num1,num2,lcm);
return 0;
}