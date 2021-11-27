#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct student
    {
        char name[30];
        long int roll;
        struct student *next;
    } ;
    typedef struct student stu;
    stu *top=NULL,*new_node;
    int main()
    {
        int ch;
        int push_stack();
        int pop_stack();
        int count_stack();
        int show_stack();
        while(1)
        {
            printf("\n1.PUSH IN STACK");
            printf("\n2.POP IN STACK");
            printf("\n3.COUNT ELEMENTS IN STACK");
            printf("\n4.SHOW THE STACK");
            printf("\n5.EXIT");
            printf("\n::::::::::::::::::::::::");
            printf("\n\nEnter the operation you want to do in the stack");
            scanf("%d",&ch);
            switch(ch)
            {
            case 1:
                push_stack();
                getch();
                break;
            case 2:
                pop_stack();
                getch();
                break;
            case 3:
                count_stack();
                getch();
                break;
            case 4:
                show_stack();
                getch();
                break;
            case 5:
                exit(0);
            default:
                printf("\nYour choicr is wrong::");
            }
        }
    }
    int push_stack()
    {
        int no;
        if(top==NULL)
        {
            printf("\nThe stack is empty now");
            printf("\n\nPlease enter the 1st element of the stack");
            new_node=(stu*)malloc(sizeof(stu));
            fflush(stdin);
            gets(new_node->name);
            printf("\nEnter the student roll::");
            scanf("%ld",&new_node->roll);
            top=new_node;
            new_node->next=NULL;
        }
        else
        {
            printf("\n\nPlease enter the next element of the stack");
            new_node=(stu*)malloc(sizeof(stu));
            printf("\nEnter the name of the student");
            fflush(stdin);
            gets(new_node->name);
            printf("\n\nEnter the roll of the student::");
            scanf("%ld",&new_node->roll);
            new_node->next=top;
            top=new_node;
        }
    }
    int pop_stack()
    {
        stu *temp;
        if(top==NULL)
            printf("Your stack is empty");
        else
        {
            temp=top;
            top=top->next;
            printf("Deleted name is::");
            puts(temp->name);
            printf("Deleted roll is::");
            printf("%ld",temp->roll);
            free(temp);
        }
    }
    int count_stack()
    {
        int count=0;
        stu *ptr;
        ptr=top;
        while(ptr!=NULL)
        {
            ptr=ptr->next;
            count++;
        }
        printf("\n\nTotal number of elements present in stack:: %d",count);
    }
    int show_stack()
    {
        stu *ptr;
        printf("::::::::::::::::");
        if(top==NULL)
            printf("Stack is empty!!!!");
        else
        {
            printf("\n\nYOUR STACK IS::::\n");
            printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
            for(ptr=top;ptr!=NULL;ptr=ptr->next)
            {
                printf("\n___________________________________________________");
                printf("\nThe name of the student is::");
                puts(ptr->name);
                printf("\n\nThe roll of the student is::::");
                printf("%ld",ptr->roll);
            }
        }
    }
