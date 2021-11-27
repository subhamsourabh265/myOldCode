#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int no;
    printf("ENTER THE NUMBER\n\n");
    scanf("%d",&no);
    switch(no)
    {
    case 1:
        printf("MY NAME IS SHUBHAM\n\n");
        printf("I AM DOING ENGINEERING AT TECHNO INDIA SALT LAKE\n\n");
        break;
    case 2:
        printf("I LIVE AT KOLKATA\n\n");
        break;
    case 3:
        printf("SHUBHAM SOURABH");
        break;
    default:
        printf("NOTHING IS IMPOSSIBLE\n\n");
    }
    getch();
}
