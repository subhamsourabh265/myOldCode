#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,temp;;
    printf("Enter the values of a and b\n");;
    scanf("%d%d",&a,&b);;
    printf("Before swapping a=%d  b=%d\n\n",a,b);;
    a=a+b;b=a-b;a=a-b;;
    printf("After  swapping a=%d  b=%d\n\n\n",a,b);;
    printf("Enter the values of c and d\n");;
    scanf("%d%d",&c,&d);;
    printf("Before swapping c=%d  d=%d\n\n",c,d);;
    temp=c;;
    c=d;;
    d=temp;;
    printf("After  swapping c=%d  d=%d\n\n\n",c,d);;
    getch();;
}
