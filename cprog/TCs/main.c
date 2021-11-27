#include <stdio.h>

int check_vowel(char );
int main()
{

 char ch,vh;
while(1)
{

  printf("Input a character\n");
  scanf("%c", &ch);
  getchar();

  if(check_vowel(ch)==1)
      printf("%c is a vowel.\n", ch);
  else
      printf("%c is not a vowel.\n", ch);

      printf("do u want to continue(y/n)\n");
      scanf("%c",&vh);
      getchar();

      if(vh == 'y' || vh == 'Y')
        continue;
      else
        break;
}

  return 0;
}


int check_vowel(char a)
{
    if (a >= 'A' && a <= 'Z')
       a = a + 'a' - 'A';   /* Converting to lower case or use a = a + 32 */

    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
       return 1;

    return 0;
}
