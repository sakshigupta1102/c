#include<stdio.h>
int i=0;
void insert(int *ar,int size,int num,int pos)
{ for(i=size+1;i>=pos;i--)
        *(ar+i)=*(ar+i-1);
   *(ar+pos-1)=num;
}
int delete(int *ar,int size,int num)
{ int flag=1,j;
    for(i=0;i<size;i++)
    {
        if(*(ar+i)==num)
        {
            for(j=i;j<size;j++)
                *(ar+j)=*(ar+j+1);
            flag=0;
        }
    }
    if(flag==1)
        printf("\nElement is not present");
}
void main()
{
    int ar[10],num,pos,size,ops;
    char ch='y';
    printf("Enter the size of array(less than 10)=");
    scanf("%d",&size);
    printf("\nEnter the elements of the array=");
    for(i=0;i<size;i++)
        scanf("%d",&ar[i]);
    do{
        printf("\nWhat you want to perform:-\n1.Insert an element\n2.Delete an element\nEnter your choice=");
        scanf("%d",&ops);
        if(ops==1)
          { printf("\nEnter the number and position=");
            scanf("%d%d",&num,&pos);
            insert(&ar[0],size,num,pos);
            size++;
            printf("\nThe new array is=");
            for(i=0;i<size;i++)
                printf("%d\t",ar[i]);
               }
        else if(ops==2)
           { printf("\nEnter the number=");
             scanf("%d",&num);
             delete(&ar[0],size,num);
             size--;
             printf("\nThe new array is=");
             for(i=0;i<size;i++)
                printf("%d\t",ar[i]);
           }
        else
            printf("\nYou entered wrong choice");
    printf("\nDO you want to perform again (y/n)=");
    scanf("%s",&ch);
    }while((ch=='y') || (ch=='Y'));
}
