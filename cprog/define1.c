#include <stdio.h>
#define var(x,y) x##y
int main(void)
{
	int empsal=67;
	printf("%d\n",var(emp,sal));
	return 0;
	
}