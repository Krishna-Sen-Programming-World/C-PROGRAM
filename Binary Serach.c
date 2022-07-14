#include<stdio.h>
int main()
{
	int end,n,begin=0,f=0;
	printf("Enter the range ");
	scanf("%d",&end);
	printf("Enter the no to be searched ");
	scanf("%d",&n);
	int arr[end];
	end--;
	printf("Enter the array in sorted way ");
	for(int i=0;i<=end;i++)
	scanf("%d",&arr[i]);
	while(begin<=end)
	{
		int mid=(begin+end)/2;
		if(n<arr[mid])
		end=mid-1;
		if(n>arr[mid])
		begin=mid+1;
		if(arr[mid]==n)
		{
			f=1;
			printf("The element is found in position : %d",mid);
			break;
		}
	}
	if(f!=1)
	printf("The element is not found");
	return 0;
}
