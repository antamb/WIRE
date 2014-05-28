
#include "fdf.h"

int     my_strlen(char *str)
{
  int   cpt;

  cpt = 0;
  while (str[cpt] != '\0')
    cpt++;
  return (cpt);
}
