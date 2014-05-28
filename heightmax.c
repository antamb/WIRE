
#include "mlx.h"
#include "fdf.h"

int     hmax(char *str)
{
  int   hmax = 0;
  int   i = 0;
  char  *strg;

  epurstr(&str);
  epurspace(str, &i);
  while (str[i] != '\0')
    {
      strg = fills(str, &i);
      hmax = (hmax >= my_get_nbr(strg) ? hmax : my_get_nbr(strg));
      if (str[i] < 48 || str[i] < 57)
        i++;
    }
  return (hmax);
}
