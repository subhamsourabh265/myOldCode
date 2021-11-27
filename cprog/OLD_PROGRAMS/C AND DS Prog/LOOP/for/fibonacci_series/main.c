#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    long int i,f1,f2,f3,n;
    printf("PLEASE ENTER THE NUMBER OF TERMS\n\n\n");
    scanf("%ld",&n);
    f1=0;
    f2=1;
    printf("FIBONACCI SERIES:\n\n");
    printf("%ld %ld ",f1,f2);
    for(i=0;i<=n;i++)
    {
        f3=f1+f2;
        printf("%ld ",f3);
        f1=f2;
        f2=f3;
    }
    getch();
}

