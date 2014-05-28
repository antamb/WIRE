
#include "fdf.h"

int	nbelem(char *tab)
{
  int	j;

  j = 0;
  while (tab[j] != '\0' && tab[j] != '\n')
    j++;
  return (j);
}
