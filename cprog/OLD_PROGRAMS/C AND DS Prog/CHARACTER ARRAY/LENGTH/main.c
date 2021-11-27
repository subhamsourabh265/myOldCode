#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,length=0;
    char name[100];
    printf("ENTER YOUR NAME\n\n");
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]!=' ')
             length++;
    }

    printf("THE TOTAL LENGTH IS %d",length);
    getch();
}
