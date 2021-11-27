#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a[5],i,sum=0;
    printf("ENTER THE ARRAY ELEMENTS\n\n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("THE SUM OF THE ARRAY ELEMENTS =%d\n",sum);
    getch();
}
