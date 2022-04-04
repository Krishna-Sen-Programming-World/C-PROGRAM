#include<stdio.h>  
 int main()    
{    
int a,b;
printf("enter the 1st number : ");
scanf("%d",&a);      
printf("enter the 2nd number : ");
scanf("%d",&b);
printf("\n\n Before swap \n a=%d \n b=%d",a,b);      
a=a+b;    
b=a-b;   
a=a-b;   
printf("\n\n After swap \n a=%d \n b=%d",a,b);    
return 0;  
}   