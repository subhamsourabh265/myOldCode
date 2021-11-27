#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num,first,last,sum;
    printf("ENTER  THE 4 DIGIT NUMBER\n");
    scanf("%d",&num);
    first=num/1000;
    last=num%10;
    sum=first+last;
    printf("SUM OF THE FIRST AND LAST\nDIGIT OF THE 4 DIGIT NUMBER IS %d",sum);
    getch();
}
