
#include "fdf.h"
#include "mlx.h"

void    epurstr(char **str)
{
  int   i;

  i = 0;
  while (str[0][i] != '\0')
    i++;
  while (str[0][i] < 48 || str[0][i] > 57)
    i--;
  str[0][i + 1] = '\0';
}
