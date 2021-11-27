#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char x;
    printf("ENTER THE CHARACTER\n\n");
    scanf("%c",&x);
    switch(x)
    {
    case 'A':
        printf("APPLE\n\n");
        break;
    case 'B':
        printf("boy\n\n");
        break;
    case 'c':
        printf("cat\n\n");
        printf("cow\n\n");
    case 'C':
        printf("camera\n\n");
        break;
    default:
        printf("WRONG I/P\n\n");
        getch();
    }
    getch();
}
