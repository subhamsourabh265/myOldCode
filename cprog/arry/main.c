#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a,i,j,n,*k,m=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    printf("The array  elements are:\n");
     for(i=0;i<n;i++)
     {
         printf("%d\t",a[i]);
     }
     k=(int*)realloc(a,n*n*sizeof(int));
     if (k==NULL)
		{
			printf("Error reallocating memory!");
			//Free the initial memory block.
			free (k);
			exit (1);
		}
		for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
              k[m]=a[i]+a[j];
              m++;
            }
        }
     printf("\nAbsolute values are:\n\n");
     for(i=0;i<(n*n);i++)
     {
         if(k[i]<0)
            k[i]=k[i]*(-1);
     }
     for(i=0;i<n;i++)
     {
         printf("%d\t",k[i]);
     }
    getch();
}
