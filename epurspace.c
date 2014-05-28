
#include "fdf.h"

void	epurspace(char *tab, int *j)
{
  while (tab[(*j)] == 32 && tab[(*j)] != '\0')
    (*j)++;
}
