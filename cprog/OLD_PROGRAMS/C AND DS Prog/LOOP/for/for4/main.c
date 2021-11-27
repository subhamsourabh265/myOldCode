#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,a,x,n;
    printf("PLEASE ENTER THE RANGE OF THE NUMBERS\n\n");
    scanf("%d%d",&a,&n);
    if(a<1||n<=a)
        printf("WRONG I/P\n");
        else
            printf("THE EVEN NUMBERS BETWEEN %d AND %d ARE:\n\n",a,n);
           for(i=a;i<=n;i++)
             {
              if(i%2==0)
                printf("%d ",i);
             }
    getch();
}
