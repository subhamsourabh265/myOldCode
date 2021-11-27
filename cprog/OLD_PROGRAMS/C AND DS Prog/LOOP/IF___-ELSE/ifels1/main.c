#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int NO;
    printf("ENTER THE NUMBER\n\n");
    scanf("%d",&NO);
    if(NO%10==0)
    {
        if(NO%8==0)
        printf("\n\n%d is divisible by 10 and 8 both\n\n",NO);
        else
            printf("%d is divisible by 10 but not by 8\n\n",NO);
    }
    else
    printf("%d is not divisible by 10\n\n",NO);
    getch();
}
