
#include "fdf.h"

int     my_get_nbr(char *nbr)
{
  int   n;
  int   i;
  int   res;

  n = 1;
  res = 0;
  i = my_strlen(nbr) - 1;
  while(i >= 0)
    {
      res = res + (n * (nbr[i] - 48));
      n = n * 10;
      i--;
    }
  return (res);
}
