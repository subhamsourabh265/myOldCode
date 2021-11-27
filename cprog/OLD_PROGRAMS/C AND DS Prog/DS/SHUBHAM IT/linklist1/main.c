#include <stdio.h>
#include <stdlib.h>
typedef struct list
{
   int x;
   struct list *next;
  }l;

  void create(l*);
  void display();
  void insert_beg();
  void insert_end();
  void del_end();
  void del_beg();
  void insert_mid();
  void delete_mid();
  l *head=NULL;
  void main()
{
    int z;
    head=(l*)malloc(sizeof(l));
    while(1)
    {
        printf("\n1.create\n");
        printf("2.Insert in beg\n");
        printf("3.Insert in end\n");
        printf("4.Insert in any position\n");
        printf("5.Delete at end\n");
        printf("6.Delete at beginning\n");
        printf("7.Delete at any position\n");
        printf("8.Exit\n");
    printf("\nEnter the Option\n");
    scanf("%d",&z);
 switch(z)
{
case 1 :printf("Create the list\n");
    create(head);
    printf("Display the List\n");
    display();
    break;
case 2 :
    insert_beg();
    break;
case 3 :
    insert_end();
    break;
case 4:
    insert_mid();
    break;
case 5:
    del_end();
    break;
case 6:
    del_beg();
    break;
case 7:
    delete_mid();
    break;
case 8:
    exit(0);
default:
    printf("\n INVALID CHOICE! \n");
}
}
}
void create(l *ptr)
{
    char ch;
    printf("\nEnter The Element\n");
    scanf("%d",(&ptr->x));
    ptr->next=NULL;
    printf("Do u want to contine?(y/n)");
    printf("\n");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch!='n')
    {

        ptr->next=(l*)malloc(sizeof(l));
        ptr=ptr->next;
        create(ptr);
    }
}
void insert_beg()
{
    l *new1;
    new1=(l *)malloc(sizeof(l));
    printf("Enter the element to insert:\n");
    scanf("%d",&(new1->x));
    new1->next=head;
    head=new1;
    display();
}

void insert_end()
{
	l* new1;
	l* temp;
		new1 = (l *) malloc(sizeof(l));
		printf("Enter The Element You Want To Insert At The End:-\n");
		scanf("%d", &new1->x);
		for (temp=head;temp->next!=NULL;temp=temp->next);
			temp->next = new1;
			new1->next = NULL;

			display();
}
void display()
{

    l *ptr;
    ptr=head;
    printf("\n");
    while(ptr!=NULL)
    {

        printf("%d-> ",ptr->x);
        ptr=ptr->next;
    }
 printf("NULL");
}

void del_end()
{
    l* ptr;
    l* del;
    for(ptr=head;ptr->next->next!=NULL;ptr=ptr->next);
        del=ptr->next;
        ptr->next=NULL;
        free(del);
        display();
}
void del_beg()
{
    l* del;
    del=head;
    head=del->next;
    free(del);
    display();
}
void insert_mid()
{
l* ptr;
l* new1;
int input;
printf("Enter the number after which you wish to enter:\n");
scanf("%d",&input);
while(ptr->next!=NULL)
{
    if(ptr->x==input)
new1=(l*)malloc(sizeof(l));
printf("Enter the element to insert:\n");
    scanf("%d",&(new1->x));
    new1->next=ptr->next;
    ptr->next=new1;
display();
}

void delete_mid()
{
l* ptr;
l* del;
int input;
printf("Enter the number which you want to delete:\n");
scanf("%d",&input);
for(ptr=head;ptr!=NULL;ptr=ptr->next)
{
    if(ptr->next->x==input)
        break;
}
del=ptr->next;
ptr->next=del->next;
free(del);
display();
}}
