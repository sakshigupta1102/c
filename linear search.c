#include<stdio.h>

void linear_search(int a[],int x);

void main()
{
    int a[7],i,num;
    printf("Enter the elements of array=");
    for(i=0;i<7;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("\nEnter the element you want to search=");
    scanf("%d",&num);
    linear_search(a,num);
}

void linear_search(int a[],int x)
{
    int i,flag=0;
    for(i=0;i<7;i++)
    {
        if (a[i]==x)
        {
            printf("\nElement found");
            flag=1;
            break;
        }}
    if(flag==0)
        printf("Element not found");
}
