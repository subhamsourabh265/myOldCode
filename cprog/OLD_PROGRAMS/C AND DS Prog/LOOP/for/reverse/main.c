#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,num,rev=0,rem;
    printf("ENTER THE NUMBER\n\n");
    scanf("%d",&num);
    for(i=num;i!=0;i=i/10)
    {
        rem=i%10;
        rev=rev*10+rem;
    }
    printf("THE REVERSE NUMBER IS %d\n\n",rev);
    getch();
}
