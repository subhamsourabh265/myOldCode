#include "stdio.h"
void main()
{
 FILE *fp;
 char ch;
 fp = fopen("INPUT.txt","w"); // Open file in Read mode

   while(1)
   {
   ch = fgetc(fp); // Read a Character
      if(ch == EOF ) // Check for End of File
         break ;

   printf("%c",ch);
   }
 fclose(fp); // Close File after Reading
}
