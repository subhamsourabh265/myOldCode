#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp,n,i,l,j,k=0,r,a[100];
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=n;i!=0;i=i/10)
    {
        r=i%10;
        a[k]=r;
        k++;

    }

    printf("\n\n\n");
    for(i=0;i<k-1;i++)
        for(j=0;j<k-i-1;j++)
    {
        if(a[j]<a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }

    }
    printf("Max number is\n");
     for(i=0;i<k;i++)
    printf("%d",a[i]);
    return 0;
}
