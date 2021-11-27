#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,j,len=1,k=0;
    char a[100],rev[100];
    printf("plz enter the name\n");
    gets(a);
    for(i=0;a[i]!='\o';i++)
    {
    len++;
    }
    for(j=(len);j>=0;j--)
    {
        rev[k]=a[j];
        k++;
    }
    rev[k]='\0';
    printf("\nThe reverse is");
    puts(rev);
    getch();

}
