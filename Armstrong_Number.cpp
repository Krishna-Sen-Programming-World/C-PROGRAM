#include<stdio.h>
#include<math.h>
int main()
{
     int num,dup,sum=0,dig=0,r;
    printf("enter the number:");
    scanf("%d",&num);
    dup=num;
     while(dup>0)
     {dup=dup/10;
      dig++;
      }
      dup=num;
      while(dup>0)
      {   r=dup%10;
          sum=sum+pow(r,dig);
           dup=dup/10;
      }
      if(num==sum)
       printf("the number is ARMSTRONG");
     else
        printf("the number is NOT ARMSTRONG");
return 0;
}