#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i=0;
    char a[50],b[50],flag;
    printf("ENTER YOUR NAME\n\n");
    gets(a);
    while(a[i]!='\0')
    {
        if(a[i]>=65&&a[i]<=90)
        {
            b[i]=a[i]+32;
            flag='s';
        }
        else if(a[i]>=97&&a[i]<=122)
        {
            b[i]=a[i]-32;
            flag='c';
        }
        else
            b[i]=a[i];
        i++;
    }
    b[i]='\0';
    if(flag=='c')
    {
        printf("\n\nThe string in capital letter is::\n\n");
        puts(b);
    }
    if(flag=='s')
    {
        printf("\n\nThe string in small letter is ::\n\n");
        puts(b);
    }
    getch();
}
