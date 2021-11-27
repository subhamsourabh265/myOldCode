#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,j,length=0,k=0;
    char a[100],rev[100];
    printf("enter the name\n");
    gets(a);
    i=0;
    while(a[i]!='\0')
    {
        length++;
        i++;
    }
    for(j=(length-1);j>=0;j--)
    {
        rev[k]=a[j];
        k++;
    }
    rev[k]='\0';
    printf("\nThe reverse string is\n");
    puts(rev);
    getch();
}
