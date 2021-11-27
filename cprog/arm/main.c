#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
   int n, sum = 0, temp, remainder, digits = 0;

   printf("Input an integer\n");
   scanf("%d", &n);

   temp = n;
   // Count number of digits
   while (temp != 0) {
      digits++;
      temp = temp/10;
   }

   temp = n;

   for(temp=n;temp!=0;temp=temp/10)
   {
      remainder = temp%10;
      sum = sum + pow(remainder, digits);
   }
  printf("%d",sum);
   if (n == sum)
      printf("%d is an Armstrong number.\n", n);
   else
      printf("%d is not an Armstrong number.\n", n);

   return 0;
}
