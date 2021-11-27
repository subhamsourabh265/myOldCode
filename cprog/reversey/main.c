#include <stdio.h>
#include <stdlib.h>

int main()
{
   long i,n, reverse = 0;

   printf("Enter a number to reverse\n");
   scanf("%ld", &n);

   for(i=n;i!=0;i=i/10)
   {
      reverse = reverse * 10;
      reverse = reverse + i%10;
   }
   if(reverse==n)
   printf("%ld is a palindrome\n", n);
   else
    printf("%ld is not a palindrome\n", n);
   return 0;
}
