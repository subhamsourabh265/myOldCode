#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
 {
     int i,j,s,n,x;
     printf("ENTER THE TWO NUMBERS\n\n");
     scanf("%d%d",&x,&n);
     printf("THE PRIME NUMBERS B/W %d AND %d ARE:\n\n",x,n);
     for(i=x;i<=n;i++)
     {
         for(j=2;j<i;j++)
         {
             if(i%j==0)
             {
                s=1;
                break;
             }
             else
                s=0;
         }
         if(s==0)
            printf("%d  \n",i);
     }
     getch();

 }

