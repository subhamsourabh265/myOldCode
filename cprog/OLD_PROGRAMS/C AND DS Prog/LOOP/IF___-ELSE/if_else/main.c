#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int no;
    printf("PLEASE ENTER THE NUMBER\n");
    scanf("%d",&no);
    if(no%2==0)
        printf("%d IS EVEN NUMBER\n",no);
    else
       printf("%d IS ODD NUMBER\n",no);
    getch();
}
