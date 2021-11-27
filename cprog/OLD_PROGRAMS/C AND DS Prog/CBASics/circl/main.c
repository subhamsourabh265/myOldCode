#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int dia;
    float peri,ar;
    printf("ENTER THE LENGTH OF THE DIAMETER\n");
    scanf("%d",&dia);
    peri=2*3.14*dia/2;
    ar=3.14*dia/2*dia/2;
    printf("PERIMETER OF THE CIRCLE IS %f\nAREA OF THE CIRCLE IS %f",peri,ar);
    getch();
}
