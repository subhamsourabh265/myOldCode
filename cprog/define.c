#include <stdio.h>
#define square(x)  x*x
#define square2(x) (x)*(x)
#define square3(x) ((x)*(x))
int main()
{
printf("%d\n",square(5));
printf("%d\n",square(5+7));
printf("%d\n",square2(5+7));
printf("%d\n",144/square2(5+7));
printf("%d\n",144/square3(5+7));
}
