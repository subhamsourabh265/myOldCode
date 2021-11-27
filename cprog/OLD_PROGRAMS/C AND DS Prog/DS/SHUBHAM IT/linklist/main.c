#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef struct list{
    int x;
    struct list *next;
} l;
l *head=NULL,*ptr;
void create(l*);
void display();
void insert_beg(void);
void insert_mid(l *);
void insert_end(l *);
void delete_beg(void);
void delete_mid(l *);
void delete_end(l *);

void main()
{
    int z;
    l *ptr;
    ptr=(l*)malloc(sizeof(l));
    head = ptr;
    printf("\n--------CREATION OF LINK LIST---------\n\n");
    create(ptr);
    printf("\n   Display the list\n");
    display();
    printf("\nEnter your choice where to insert or delete the element\n");
    printf("\nPress 1 to insert at the beg:\n");
    printf("\nPress 2 to insert at the mid:\n");
    printf("\nPress 3 to insert at the end:\n");
    printf("\nPress 4 to delete at the beg:\n");
    printf("\nPress 5 to delete at the mid:\n");
    printf("\nPress 6 to delete at the end:\n");
    printf("\nYour choices are :1  2  3  4  5  6\n\n");
    scanf("%d",&z);
    switch(z)
    {
       case 1:
    insert_beg();
    break;
    case 2:
    insert_mid(head);
    break;
    case 3:
    insert_end(head);
    break;
    case 4:
    delete_beg();
    break;
    case 5:
     delete_mid(head);
     break;
    case 6:
    delete_end(head);
    break;
    default:
    printf("wrong data");

     }

}
void create(l *ptr)
{
    char ch;
    printf("  Enter the element\n");
    scanf("%d",&(ptr->x));
    ptr->next=NULL;
    printf("do you want to cont.\n");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch!='n')
    {
        ptr->next=(l*)malloc(sizeof(l));
        ptr=ptr->next;
        create(ptr);
    }
}
void display()
{
    l *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d --> ",ptr->x);
        ptr=ptr->next;
    }
    printf("NULL");
}

 void insert_beg()
 {
     l *new;
     new=(l*)malloc(sizeof(l));
     printf("\nenter the element to be inserted\n");
     fflush(stdin);
     scanf("%d",&(new->x));
     new->next=head;
     head=new;
     display();
 }
void insert_mid(l *ptr)
 {
     l *new;
     int ele;
     printf("\nenter the element after which to start\n");
     scanf("%d",&ele);
     while(ptr!=NULL)
     {
         if(ptr->x==ele)
         {
             new=(l*)malloc(sizeof(l));
             new->next=ptr->next;
             ptr->next=new;
             printf("\nEnter the element\n");
             scanf("%d",&(new->x));
             break;
         }
         else
            ptr=ptr->next;
     }
     display();
 }
 void insert_end(l *ptr)
 {
     l *new;
     new=(l*)malloc(sizeof(l));
     printf("\nEnter the element\n\n");
     scanf("%d",&(new->x));
     while(ptr->next!=NULL)
     {
      ptr=ptr->next;
      ptr->next=new;
      new->next=NULL;
     }
      display();
 }
 void delete_beg()
 {
     l *loc;
     loc=head;
     head=loc->next;
     free(loc);
     display();
 }
 void delete_mid(l *ptr)
 {
     l *ptr1,*loc;
     int ele;
     printf("\nEnter the element after which to delete\n");
     scanf("%d",&ele);
     head=ptr;
     while(ptr!=NULL)
     {
         if(head==NULL)
         {
             printf("\n Underflow \n");
             exit(0);
         }
         if(ptr->x==ele)
         {
             loc=head;
             head=ptr->next;
             free(loc);
         }
         else
         {
             ptr1=ptr->next;
             while(ptr1->next!=NULL)
             {
                 if(ptr1->x==ele)
                    ptr->next=ptr1->next;
                 else
                 {
                     ptr1=ptr1->next;
                     ptr=ptr->next;
                 }
             }
             free(ptr1);
         }
     }
 }
 void delete_end(l *ptr)
 {
     l *end;
     ptr=head;
    // while(ptr->next!=NULL)
    for(ptr=head;ptr->next->next!=NULL;ptr=ptr->next);

        end=ptr->next;
        ptr->next=NULL;
        free(end);

     display();
 }
