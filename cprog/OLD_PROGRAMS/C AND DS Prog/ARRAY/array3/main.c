#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,sum1=0,sum2=0,a[10];
    printf("ENTER THE NUMBER\n\n");
    for(i=0;i<10;i++)
       scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
            sum1=sum1+a[i];
        else
            sum2=sum2+a[i];
    }

    printf("sum of even numbers =%d\n",sum1);
    printf("Hello world!\n");
    return 0;
}
