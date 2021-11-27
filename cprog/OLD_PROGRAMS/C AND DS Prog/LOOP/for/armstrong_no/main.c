#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
    int i,num,sum=0,rem;
    printf("ENTER THE NUMBER\n\n");
    scanf("%d",&num);
    for(i=num;i!=0;i=i/10)
    {
        rem=i%10;
        sum=sum+(rem*rem*rem);
    }
    if(sum==num)
        printf("%d IS AN ARMSTRONG NUMBER\n\n",num);
    else
        printf("%d IS NOT AN ARMSTRONG NUMBER\n",num);
    getch();
}
