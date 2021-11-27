#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i = 1;
    int j, a;
while ( i <= 4 )
    {
        j = 1;
        a = 0;
        while ( a <= 5*i )
            {
                 a = pow(2,j);
                 printf("%d",a);
                 printf(" ");
                 j = j + 1;
            }
            printf("\n");
            i = i + 1;
    }
}
