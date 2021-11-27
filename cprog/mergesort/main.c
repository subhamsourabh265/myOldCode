#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[100],n,i,j;
   printf("Give n\n");
   scanf("%d",&n);
   printf("Enter the nos\n\n");
   for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   printf("The nos are\n");
   for(i=0;i<n;i++)
    printf("%d",a[i]);
    printf("\n");
    mergesort(a,0,n-1);
    printf("Sorted nos are\n");
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    printf("\n");

}
mergesort(a,i,j)
int a[],i,j;
{
    int k,mid;
    if(i>=j)
        return;
    else
    {
     mid=(i+j)/2;
    mergesort(a,i,mid);
    mergesort(a,mid+1,j);
    merge(a,i,j,mid);
    }
}
merge(a,i,j)
