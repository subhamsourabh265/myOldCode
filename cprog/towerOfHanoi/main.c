#include <stdio.h>
#include <stdlib.h>

main()
{
    int n;
    printf("ENTER THE  VALUE  OF  n\n");
    scanf("%d",&n)
;    tower(n,'A','B','C');
}
tower(m,from,to,via)
{
    if(m==1)
        printf("Move from %c  to  %c\n",from,to);
    else
    {
        tower(m-1,from,via,to);
        printf("Move from %c  to  %c\n",from,to);
        tower(m-1,via,to,from);
    }
}
