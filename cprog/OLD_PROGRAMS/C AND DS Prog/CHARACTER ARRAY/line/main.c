#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,n=0,n1=0;
    char line[200];
    printf("Enter the line\n");
    gets(line);
    for(i=0;line[i]!='\0';i++)
    {
        if(line[i]=='A'||line[i]=='a'||line[i]=='E'||line[i]=='e'||line[i]=='I'||line[i]=='i'||line[i]=='O'||line[i]=='o'||line[i]=='U'||line[i]=='u')
            n++;
            else if(line[i]==' ')
                n1++;
            else
            {}
    }

    printf("total no of vowels is %d and space bars is %d",n,n1);
}
