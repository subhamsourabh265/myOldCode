#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,n,z,flag;
    printf("PLEASE ENTER THE NUMBER\n\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        z=n%i;
        if(z==0)
        {
            flag=1;
            break;
        }
        else
            flag=0;
    }
       if(flag==0)
        printf("%d is PRIME\n\n",n);
       else
        printf("%d Is not PRIME",n);
       getch();
}
