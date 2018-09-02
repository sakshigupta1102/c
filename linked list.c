#include<stdio.h>
#include<stdlib.h>


struct node
{
    char name[20];
    struct node *next;
};
struct node *start=NULL;
int len=0;


void append()
{ struct node *temp,*ptr;
  temp=(struct node *)malloc(sizeof(struct node));

  if (temp==NULL)
    printf("Memory out of space");

  else
  {
    printf("\n Enter the name of friend: ");
    scanf("%s",&temp->name);
    temp->next=NULL;

    if(start==NULL)
        start=temp;

    else
    {
        ptr=start;

        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
  }
}

void display()
{ struct node *temp;
  temp=start;

  if (start==NULL)
    printf("No element present\n");

  else
    while(temp!=NULL)
    {
        printf("%s-->",temp->name);
        temp=temp->next;
    }
}

void insert_beg()
{ struct node *temp;
  temp=(struct node *)malloc(sizeof(struct node));

  if (temp==NULL)
    printf("Memory out of space");

  else
  {
    printf("\n Enter the name of friend: ");
    scanf("%s",&temp->name);
    temp->next=NULL;

    if(start==NULL)
        start=temp;

    else
    {
        temp->next=start;
        start=temp;
    }
  }
}

int length()
{struct node *temp;
 temp=start;

 while(temp!=NULL)
 {
     len++;
     temp=temp->next;
 }

return(len);
}

void insert_at_pos()
{ int pos,i=1;
  struct node *temp,*ptr;
  temp=(struct node *)malloc(sizeof(struct node));

  if (temp==NULL)
    printf("Memory out of space");

  else
  {
    printf("Enter the position : ");
    scanf("%d",&pos);
    printf("\n Enter the name of friend: ");
    scanf("%s",&temp->name);
    temp->next=NULL;

    if(pos==1)
    {
        temp->next=start;
        start=temp;
    }

    else if(pos>length())
        printf("can't insert there!!");

    else
     {
         ptr=start;

         while(i<pos-1)
         {
             ptr=ptr->next;
             i++;
         }
         temp->next=ptr->next;
         ptr->next=temp;
     }
  }
}

void delete_beg()
{ struct node *temp;

  if(start==NULL)
    printf("No item to detele");

  else
  {
      temp=start;
      start=start->next;
      printf("the deleted item is : %s",temp->name);
      free(temp);
  }
}

void delete()
{ struct node *temp,*ptr;

  if (start== NULL)
    printf("NO item to delete");

  else if(start->next==NULL)
  {
      temp=start;
      start=NULL;
      printf("The deleted item is : %s",temp->name);
      free(temp);
  }

  else
  {
    ptr=start;

    while(ptr->next!=NULL)
    {
        temp=ptr;
        ptr=ptr->next;
    }
    temp->next=NULL;
    printf("The deleted item is : %s",ptr->name);
    free(ptr);
  }
}

void delete_pos()
{ struct node *temp,*ptr;
  int pos,i=1;

  if(start==NULL)
        printf("The list is empty");
  else
    {
        printf("Enter the position that you want to delete :");
        scanf("%d",&pos);

        if(pos>length())
            printf("wrong number ");

        else if(pos==1)
        {
            ptr=start;
            start=start->next;
            printf("Deleted item : %s",ptr->name);
            free(ptr);
        }

        else
        {
            ptr=start;

            while(i<pos)
            {
                temp=ptr;
                ptr=ptr->next;
                i++;
            }
            temp->next=ptr->next;
            printf("The deleted item is : %s",ptr->name);
            free(ptr);
        }
    }
}
void main()
{  int choice;

          while(1){
                printf("\n***SINGLE LINKED LIST OPERATIONS:****");
                printf("\n                MENU                             ");
                printf("---------------------------------------");
                printf("\n 1.Append     ");
                printf("\n 2.Display    ");
                printf("\n 3.Insert at the beginning    ");
                printf("\n 4.Length ");
                printf("\n 5.Insert at specified position       ");
                printf("\n 6.Delete from beginning      ");
                printf("\n 7.Delete from the end        ");
                printf("\n 8.Delete from specified position     ");
                printf("\n 9.Exit       ");
                printf("\n--------------------------------------\n");
                printf("Enter your choice:");
                scanf("%d",&choice);

                switch(choice)
                {
                        case 1:
                                        append();
                                        break;
                        case 2:
                                        display();
                                        break;
                        case 3:
                                        insert_beg();
                                        break;
                        case 4:
                                        len=length();
                                        printf("Length of the list : %d",len);
                                        break;
                        case 5:
                                        insert_at_pos();
                                        break;
                        case 6:
                                        delete_beg();
                                        break;
                        case 7:
                                        delete();
                                        break;
                        case 8:
                                        delete_pos();
                                        break;
                        case 9:
                                        exit(1);
                                        break;
                        default:
                                        printf("\n Wrong Choice:\n");
                                        break;
                }
        }
}
