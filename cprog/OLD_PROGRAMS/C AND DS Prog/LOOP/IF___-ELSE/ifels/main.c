#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int no;
    printf("ENTER THE NUMBER\n\n");
    scanf("%d",&no);
    if(no%3==0)
    {
        if(no%5==0)
            printf("the number %d is DIVISIBLE BY 3 and 5 BOTH\n",no);
        else
            printf("the number %d is divisible by 3 but not by 5\n",no);
    }
    else
        printf("the number %d is NOT DIVISIBLE BY 3",no);
        getch();
}
