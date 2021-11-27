#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,sum1=0,sum2=0;
    i=1;
    do
    {
        if(i%2==0)
            sum1=sum1+i;
        else
            sum2=sum2+i;
            i++;
    }while(i<=5);
    printf("SUM OF EVEN NO =%d\n",sum1);
    printf("SUM OF ODD NOs =%d\n",sum2);
    getch();
}
