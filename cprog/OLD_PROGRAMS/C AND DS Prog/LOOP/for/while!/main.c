#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,n;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("THE FACTORS OF %d ARE :\n",n);
    i=1;
    while(i<=n)
    {
        if(n%i==0)
            printf("%d ",i);
        i=i+1;
    }
    getch();
}
