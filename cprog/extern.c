#include <stdio.h>
//#include <extern1.c>
int count ;
extern void write_extern();

int main()
{
   count = 5;
   write_extern();
}
