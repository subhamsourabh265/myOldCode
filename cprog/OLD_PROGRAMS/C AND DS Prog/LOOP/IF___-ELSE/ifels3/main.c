#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main()
{
    char x;
    printf("\n\nPLEASE ENTER THE CHARACTER\n\n");
    scanf("%c",&x);
     if(x=='A')
        printf("\nAPPLE\n\n");
     else if(x=='B'||x=='b')
        printf("\n\nBOY\n\n");
     else if(x=='C'||x=='c')
        printf("CAT\n\n");
     else if(x=='D'||x=='d')
        printf("DOG\n\n");
     else
        printf("WRONG I/P");
     getch();
}
