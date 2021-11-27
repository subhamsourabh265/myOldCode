#include <stdio.h>
#include <stdlib.h>

int fib(x);

int main()
{
   int i,n;
   char ch;
   printf("Enter the value of n\n");
   scanf("%d",&n);
   while(n<=20)
   {
   printf("Fibonacci series is::\n");
   for(i=0;i<=n;i++)
   printf("%d \t",fib(i));
   printf("\n\n");
   getch();
   printf("Enter the value of n\n");
   scanf("%d",&n);
   }
}
int fib(int x)
{
    if(x==0)
        return 0;
    else if(x==1)
        return 1;
    else
        return fib(x-1)+fib(x-2);
}
