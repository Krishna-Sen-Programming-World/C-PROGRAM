#include <stdio.h> 
int main()
{
int var1, var2, temp; 
printf("Enter two integers \n");
scanf("%d %d", &var1, &var2);
printf("\n\n Before Swapping \n First variable = %d \n Second variable = %d \n", var1, var2);
temp = var1;
var1 = var2;
var2 = temp;
printf("\n\n After Swapping \n\n First variable = %d \n Second variable = %d \n", var1, var2);
return 0;
}