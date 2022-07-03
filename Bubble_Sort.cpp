#include<stdio.h>
int main()
{
	printf("Enter the size of array ");
	int size;
	scanf("%d",&size);
	int m[size];
	printf("Enter the elements of array ");
	for(int i=0;i<size;i++)
	scanf("%d",&m[i]);
	
	for(int i=0;i<size-1;i++)
	for(int j=0;j<size-1-i;j++)
	if(m[j]>m[j+1])
	{
		int temp=m[j];
		m[j]=m[j+1];
		m[j+1]=temp;
	}
	printf("The elements of array after sorting is  ");
	for(int i=0;i<size;i++)
	printf("%d ",m[i]);
	return 0;
}
