#include <stdio.h>
int main()
{
    int size;
    printf("Enter the no of trains ");
    scanf("%d",&size);
    int arr[size],dep[size];
    printf("\nEnter the arrival time of the trains ");
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    printf("\nEnter the departure time of the trains ");
    for(int i=0;i<size;i++)
    scanf("%d",&dep[i]);
    int min=1,max=1;
    for(int i=0;i<size-1;i++)
    for(int j=0;j<size-1-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
            int t=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=t;
        }
    }
    
    for(int i=0;i<size-1;i++)
    for(int j=0;j<size-1-i;j++)
    {
        if(dep[j]>dep[j+1])
        {
            int t=dep[j];
            dep[j]=dep[j+1];
            dep[j+1]=t;
        }
    }
    int f1=0,f2=1;
    while(f1<size && f2<size)
    {
        if(max<min)
        max=min;
        if(dep[f1]<=arr[f2])
        {
            f1++;
            min--;
        }
        else
        {
            f2++;
            min++;
        }
    }
    printf("\nThe no of stations required is %d",max);
        return 0;
}
