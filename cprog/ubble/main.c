#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[100],i,j,temp;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    for(i=0;i<n;i++)
    scanf("%d",a+i);
    printf("Before sorting , the elements are\n\n");
    for(i=0;i<n;i++)
    printf("%d ",*(a+i));
    printf("\n\n");
    printf("After sorting , the elements are\n\n");
    for(i=0;i<n-1;i++)
        for(j=i;j<n;j++)
        if(a[i]<a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }

    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    getch();
}
