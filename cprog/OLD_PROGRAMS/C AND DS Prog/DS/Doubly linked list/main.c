#include <stdio.h>
#include <stdlib.h>
typedef struct node
{

    int data;
    struct node* prev;
    struct node* next;
}n;
n *head=NULL;
void d_create(n*);
void display();
void d_insert_beg();
void d_insert_end();
void d_del_end();
void d_del_beg();
void d_insert_mid();
void d_del_mid();
void main()
{
    int z;
    while(1)
    {
        printf("\n\n1.Press 1 to create \n");
        printf("2.Press 2 to Insert in beg\n");
        printf("3.press 3 to Insert in end\n");
        printf("4.Press 4 to Insert in any position\n");
        printf("5.Press 5 to Delete at end\n");
        printf("6.Press 6 to Delete at beginning\n");
        printf("7.Press 7 to Delete at any position\n");
        printf("8.PRESS 8 FOR EXIT\n");
    printf("\nEnter the Option\n");
    scanf("%d",&z);
 switch(z)
{
case 1 :printf("Create the list: \n");
    d_create(head);
    printf("Displaying the List: \n");
    display();
    break;
case 2 :
    d_insert_beg();
    break;
case 3 :
    d_insert_end();
    break;
case 4:
    d_insert_mid();
    break;
case 5:
    d_del_end();
    break;
case 6:
    d_del_beg();
    break;
case 7:
    d_del_mid();
    break;
case 8:
    exit(0);
default:
    printf("\n INVALID CHOICE! \n");
}
}
}
void d_create(n *ptr)
{
    n *tmp;
    char ch;
    ptr=(n*)malloc(sizeof(n));
    printf("Enter your data: \n");
    scanf("%d",&ptr->data);
    if(head==NULL)
    {
       ptr->prev=NULL;
       ptr->next=NULL;
       head=ptr;
    }
    else{
        for(tmp=head;tmp->next!=NULL;tmp=tmp->next);
        tmp->next=ptr;
        ptr->prev=tmp;
        ptr->next=NULL;
    }
    printf("Continue??(Y/N)\n");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y')
        d_create(ptr->next);
}
void d_insert_beg()
{
    n *ptr;
    ptr=(n*)malloc(sizeof(n));
    printf("Enter your data: \n");
    scanf("%d",&ptr->data);
    head->prev=ptr;
    ptr->next=head;
    ptr->prev=NULL;
    head=ptr;
    display();
}
void d_insert_end()
{
    n *tmp,*ptr;
    for(tmp=head;tmp->next!=NULL;tmp=tmp->next);
    ptr=(n*)malloc(sizeof(n));
    printf("Enter your data: \n");
    scanf("%d",&ptr->data);
    tmp->next=ptr;
    ptr->prev=tmp;
    ptr->next=NULL;
    display();
}
void d_insert_mid()
{
n *ptr;
n *new1;
int input;
printf("Enter the number after which you wish to enter:\n");
scanf("%d",&input);
for(ptr=head;ptr!=NULL;ptr=ptr->next)
{
    if(ptr->data==input)
        break;
}
new1=(n*)malloc(sizeof(n));
printf("Enter the element to insert:\n");
    scanf("%d",&(new1->data));
    new1->next=ptr->next;
    ptr->next=new1;
    new1->prev=ptr;
    new1->next->prev=new1;
display();
}
void d_del_end()
{
n *tmp;
    for(tmp=head;tmp->next!=NULL;tmp=tmp->next);
    tmp->prev->next=NULL;
    free(tmp);
    printf("DELETED!! \n");
    display();
}
void d_del_beg()
{
n *tmp;
tmp=head;
head=tmp->next;
free(tmp);
printf("DELETED!! \n");
display();
}
void d_del_mid()
{
n *ptr;
int input;
printf("Enter the number you wish to delete : \n");
scanf("%d",&input);
for(ptr=head;ptr!=NULL;ptr=ptr->next)
{
    if(ptr->data==input)
        break;
}
ptr->prev->next=ptr->next;
ptr->next->prev=ptr->prev;
free(ptr);
printf("DELETED!! \n");
display();
}
void display()
{

    n *ptr;
    ptr=head;
    printf("\n");
    printf("NULL->");
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
 printf("NULL");
}
