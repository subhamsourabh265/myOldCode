#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int sum(int*,int);
int main()
{
    int sum=0,i,a[5];
    printf("enter elements\n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    sum(a,5);
    getch();
}
int sum(int*t,int n)
{
    while(i<n)
    {
        sum=sum+*(t+i);
        i++;
    }
printf("sum is %d",sum);
}
