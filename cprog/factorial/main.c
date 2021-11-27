#include <stdio.h>
#include <stdlib.h>

fact(n);
int main()
{
    int n,f;
    printf("Please enter the value of n\n");
    scanf("%d",&n);
    f=fact(n);
    printf("Factorial of the given no is %d",f);
}
fact(int i)
{
    int x;
    if(i==0 || i==1)
        return 1;
    else
        {
            x=i*fact(i-1);
            return x;
        }
}
