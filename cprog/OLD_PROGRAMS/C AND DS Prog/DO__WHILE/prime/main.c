#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i,a[200],j,s;
    for(i=1;i<200;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                s=0;
                break;
            }
            else
                s=1;
        }
        if(s==1)
        printf("%d ",a[i]);
    }
    getch();
}
