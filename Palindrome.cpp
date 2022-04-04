#include<stdio.h>
#include<math.h>
int main()
{  int num,rev=0,dup,dig=0;
  printf("enter the number :");
  scanf("%d",&num);
  dup=num;
  while(dup>0)
    {   dup=dup/10;
         dig++;
    }
    dup=num;
  while(dup>0)
    {  rev=rev*10+dup%10;
       dup=dup/10;
    }
   if(rev==num && dig%2==0)
     {   printf("the number is even palindrome number \n");
     }
   else if(rev==num && dig%2 !=0)
     {  printf("the number is odd palindrome number \n");
     }
   else
      printf("the number is not a palindrome \n");
return 0;
}