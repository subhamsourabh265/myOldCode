/*leap year*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int year;
    printf("PLEASE ENTER THE YEAR\n\n");
    scanf("%d",&year);
    if(year<=0)
        printf("INVALID I/P");
    else if(year%4==0||year%400==0)
        printf("%d IS A LEAP YEAR\n\n",year);
    else
        printf("%d IS NOT A LEAP YEAT\n\n",year);
        getch();
}
