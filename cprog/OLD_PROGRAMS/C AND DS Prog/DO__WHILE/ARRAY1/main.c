#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,a[10];
    printf("ENTER THE ARRAY ELEMENTS\n\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("THE ARRAY ELEMENTS ARE:\n\n");
    for(i=0;i<10;i++)
        printf(" %d \n",a[i]);
    getch();
}
