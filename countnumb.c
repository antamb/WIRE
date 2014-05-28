
#include <stdio.h>

int     countnumb(char *str)
{
  int   i;
  int   nbword;

  nbword = 0;
  i = 0;
  while (str[i] != '\n' && str[i] != '\0')
    {
      if (str[i] == 32 && (str[i + 1] >= 48 && str[i + 1] <= 57))
        nbword++;
      i++;
    }
  return (nbword + 1);
}
