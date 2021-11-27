#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define NULL 0

main()
{
	int *p, *table;
	int size;
	printf(“What is the si-ze of table?\n”);
	scanf(“%d”,size);
	printf(“\n”)
		/*------------Memory allocation --------------*/
	if((table = (int*)malloc(size *sizeof(int))) == NULL)
		{
			printf(“No space available \n”);
			exit(1);
		}
	printf(“\n Address of the first byte is  %u\n”, table);
	/* Reading table values*/
	printf(“\nInput table values\n”);

	for (p=table; p<table + size; p++)
		  scanf(“%d”,p);
	/* Printing table values in reverse order*/
	for (p = table + size –1; p >= table; p --)
		printf(“%d is stored at address %u \n”,*p,p);
		getch();
}
