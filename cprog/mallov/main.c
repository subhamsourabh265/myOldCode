#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,j,n,*a,*b,k=0;
    printf("Enter the value\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
       scanf("%d",a+i);
    }
    for(i=0;i<n;i++)
    {
    printf("%d\t",a[i]);
    }
    printf("\n\n");
    b=(int*)calloc(n*n,sizeof(int));
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n*n;j++)
        {
            b[k]=a[i]+a[j];
            k++;
        }

    }
    printf("\n\n");
    for(i=0;i<n*n;i++)
    {
        printf("%d\t",b[i]);
    }


}
