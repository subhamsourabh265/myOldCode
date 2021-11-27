#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,a[101];
    printf("THE ARRAY ELEMENTS ARE:\n\n");
    for(i=0;i<=100;i++)
    {
        a[i]=i*2;
        printf("%d\t",a[i]);
    }
    getch();
}
