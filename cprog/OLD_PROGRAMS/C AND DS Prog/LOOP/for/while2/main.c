#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,n,flag;
    printf("PLEASE ENTER THE NUMBER\n");
    scanf("%d",&n);
    i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
        else
            flag=0;
            i++;
    }
    if(flag==0)
        printf("%d is prime",n);
    else
        printf("%d is not prime\n",n);
    getch();
}
