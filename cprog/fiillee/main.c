#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n;
   FILE *fptr;
   fptr=fopen("C:\prog.txt","w+");
   printf("Enter n: ");
   scanf("%d",&n);
   fprintf(fptr,"%d",n);
   fclose(fptr);
   return 0;
}
