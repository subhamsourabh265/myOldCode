#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int no;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&no);
    if(no%3==0)
    {
        if(no%5==0)
            printf("THE NUMBER %d IS DIVISIBLE BY 3 AND 5 \n",no);
        else
            printf("THE NUMBER %d IS DIVISIBLE BY 3\nBUT NOT DIVISIBLE BY 5\n",no);
    }
    else
    printf("%d IS NOT DIVISIBLE BY 3\n");
    getch();
}
