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
        printf("APPLE");
        break;
    case 'B':
        printf("BOY");
        break;
    case 'C':
        printf("CAT");
            break;
    default:
        printf("INVALId input");
    }
    getch();
}
