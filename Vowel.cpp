#include<stdio.h>
#include<string.h>
int main()
{
        char a[200];
        printf("Enter the string \n");
        gets(a);
        int count=0,v=0,c=0;
        for(int i=0;a[i]!='\0';i++)
        {
        	if(a[i]==' ')
        	count++;
        }
        printf("The no of words are :%d\n",count+1);
        for(int i=0;a[i]!='\0';i++)
        {
			 if((a[i]>=65 &&a[i]<=90)||(a[i]>=97 &&a[i]<=122))
                if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
                v++;
                else
                c++;
        }
        printf("No of vowels are : %d\n",v);
        printf("No of consonants are :%d\n",c);
        printf("Average no of consonants are :%d\n",(c/(count+1)));
	return 0;
}