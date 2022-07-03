#include<stdio.h>
#include<math.h>
int main()
{
    int num,size=0,sum=0;
    printf("enter the number:");
    scanf("%d",&num);
    for(int i=num;i>0;i/=10)
    size++;
    for(int i=num;i>0;i/=10)
    {
        int r=i%10;
        sum=sum+pow(r,size);
     }
     if(num==sum)
     printf("the number is ARMSTRONG");
     else
     printf("the number is NOT ARMSTRONG");
return 0;
}
