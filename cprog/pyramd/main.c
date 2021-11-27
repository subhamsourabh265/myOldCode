#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, j, n, k;

   printf("Enter the number of rows in pyramid of stars you wish to see ");
   scanf("%d",&n);

   k = n;

   for ( i = 1 ; i <= n ; i++ )
   {
      for ( j = 1 ; j < k ; j++ )
         printf(" ");

      k--;

      for ( j = 1 ; j <= 2*i - 1 ; j++ )
         printf("%d",j);

      printf("\n");
   }

   return 0;
}
