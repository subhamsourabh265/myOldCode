#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&no);
    if(no>=90 && no<=100)
        printf("THE GRADE IS O\n");
    else
        if(no>=70 && no<=89)
    printf("THE GRADE IS E\n");
    else
    if(no>=50 && no<=69)
    printf("THE GRADE IS A\n");
    else
    if(no>=40 && no<=49)
    printf("THE GRADE IS B\n\n");
    else if(no>100)
    printf("INVALID RESULT");
    else
        printf("THE GRADE IS F");
    getch();
}
