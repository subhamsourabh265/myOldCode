#include <stdio.h>
#include <stdlib.h>

 int main()
{
   int n, i, sum = 0, r;
   char ch;
while(1)
{
   printf("Enter an integer\n");
   scanf("%d", &n);
   getchar();

   i = n;

   while (i != 0)
   {
      r = i % 10;
     sum= sum + r;
      i = i/ 10;
   }

   printf("Sum of digits of %d = %d\n", n, sum);

   printf("Do u want to continue(y/n)\n", n, sum);
   scanf("%c",ch);

   if(ch=='y' || ch=='Y')
    continue;
   else
    break;
}
return 0;
}
