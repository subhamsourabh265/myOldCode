

#include <stdio.h>

int main()
{
  int x, y;

  scanf("%d%d", &x, &y);

  printf("Before swapping x = %d\t y = %d\n", x, y);

  x = x ^ y;
  y = x ^ y;
  x = x ^ y;

  printf("\n\nAfter swapping x = %d\t y = %d\n", x, y);

  return 0;
}
