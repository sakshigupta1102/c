#include<stdio.h>

void binary_search(int a[],int x);

void main()
{
    int a[7],i,num;
    printf("Enter the elements of array in sorted way=");
    for(i=0;i<7;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("\nEnter the element you want to search=");
    scanf("%d",&num);
    binary_search(a,num);
}

void binary_search(int a[],int x)
{
    int beg=0,flag=0,mid,end=6;
    while(a[beg]<a[end])
    {
        mid=(beg+end)/2;
        if(a[mid]==x)
        {
            printf("\nElement found");
            flag=1;
            break;
        }
        else if (x<a[mid])
            end=mid-1;
        else
            beg=mid+1;
    }
    if(flag==0)
        printf("Element not found");
}
