#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct student
{
    char name[30];
    long int roll;
    struct student *next;
};
typedef struct student stu;
stu *front=NULL,*rear=NULL,*new_node;
stu *ptr=NULL;
int main()
{
    int ch;
    int insert_queue();
    int delete_queue();
    int display_queue();
    int count_queue();
    while(1)
    {
        printf("\n::::::::::::::::::::::::::::");
        printf("\nTHIS IS A QUEUE APPLICATION");
        printf("\n1.INSERTION IN QUEUE");
        printf("\n2.DELETE FROM QUEUE");
        printf("\n3.DISPLAY THE QUEUE");
        printf("\n4.COUNT ELEMENTS IN THE QUEUE");
        printf("\n5.EXIT");
        printf("\n::::::::::::::::::::::::::");
        printf("\nENTER YOUR CHOICE");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
             insert_queue();
             getch();
             break;
        case 2:
            delete_queue();
            getch();
            break;
        case 3:
            display_queue();
            getch();
            break;
        case 4:
            count_queue();
            getch();
            break;
        case 5:
            exit(0);
        default:
            printf("Your option is Invalid");
        }
    }
}
int insert_queue()
{
    if(rear==NULL&&front==NULL)
    {
        printf("\nThis is the first element in the queue ");
        new_node=(stu*)malloc(sizeof(stu));
        fflush(stdin);
        printf("\n\nEnter the student name::");
        gets(new_node->name);
        printf("\nEnter the roll number::");
        scanf("%ld",&new_node->roll);
        new_node->next=NULL;
        rear=new_node;
        front=new_node;
    }
    else
    {
        new_node=(stu*)malloc(sizeof(stu));
        fflush(stdin);
        printf("\nEnter the student name::");
        gets(new_node->name);
        printf("\nEnter the roll number::");
        scanf("%ld",&new_node->roll);
        new_node->next=NULL;
        rear->next=new_node;
        rear=new_node;
    }
}
int delete_queue()
{
    stu *temp;
    if(front==NULL)
    {
        printf("\nThe queue is empty");
    }
    else
    {
        temp=front;
        printf("\nThe deleted name::");
        puts(temp->name);
        printf("\nThe deleted roll is::");
        printf("%ld",temp->roll);
        front=front->next;
        free(temp);
        if(front==NULL)
        {
            printf("\n\nThe deleted element is the LAST ELEMENT in the queue");
            front=NULL;
            rear=NULL;
        }
    }
}
int display_queue()
{
    stu *traverse;
    traverse=front;
    printf("\nYour queue is::");
    if(front==NULL)
    {
        printf("\nTHE QUEUE is empty");
    }
    else
    {
        while(traverse!=NULL)
        {
            printf("\n______________________________");
            printf("\n\nThe name of the student is ::");
            puts(traverse->name);
            printf("\nThe roll of the student is ::");
            printf("%ld",traverse->roll);
            printf("\n_______________________________");
            traverse=traverse->next;
        }
        getch();
    }
}
int count_queue()
{
    int count=0;
    ptr=front;
    while(ptr!=NULL)
    {
        ptr=ptr->next;
        count++;
    }
    printf("\nThe total number of elements present in the queue is  ::%d",count);
}
