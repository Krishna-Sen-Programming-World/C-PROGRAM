#include <stdio.h>

int main()
{
    printf("Enter 1 do delete array using array position ");
    printf("\nEnter 2 do delete array using array element ");
    int ch;
    scanf("%d",&ch);
    printf("\nEnter the size of the array ");
    int size;
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter the elements of the array ");
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    switch(ch)
    {
        case 1:
        printf("\nEnter the position you want to delete ");
        int pos;
        scanf("%d",&pos);
        pos=pos-1;
        printf("\n The array before deletion is : ");
        for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
        for(int i=pos;i<size;i++)
        arr[i]=arr[i+1];
        printf("\n The array after deletion is : ");
        for(int i=0;i<size-1;i++)
        printf("%d ",arr[i]);
        break;
        case 2:
        printf("\nEnter the element you want to delete ");
        int ele,f=0,pos1;
        scanf("%d",&ele);
        for(int i=0;i<size;i++)
        if(ele==arr[i])
        {
            f=1;
            pos1=i;
            break;
        }
        if(f==1)
        {
            printf("\nThe array before deletion is : ");
            for(int i=0;i<size;i++)
            printf("%d ",arr[i]);
            for(int i=pos1;i<size;i++)
            arr[i]=arr[i+1];
            printf("\nThe array after deletion is : ");
            for(int i=0;i<size-1;i++)
            printf("%d ",arr[i]);
        }
        else
        printf("Element not present in the array");
        
        break;
        default :
        printf("Entered choice doesnot match the condition");
    }
    return 0;
}
