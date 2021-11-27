#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int l,b,peri,ar;
    printf("ENTER THE LENGTH OF THE RECTANGLE\n");
    scanf("%d",&l);
    printf("ENTER THE BREADTH OF THE RECTANGLE\n");
    scanf("%d",&b);
    peri=2*(l+b);
    ar=l*b;
    printf("PERIMETER=%d\nAREA=%d",peri,ar);
    getch();
}
