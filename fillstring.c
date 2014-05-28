
#include "mlx.h"
#include "fdf.h"

char    *fills(char *str, int *i)
{
  int   j;
  char  *string;

  string = malloc(30 * sizeof(*string));
  j = 0;
  while (str[(*i)] >= '0' && str[(*i)] <= '9')
    {
      string[j] = str[(*i)];
      j++;
      (*i)++;
    }
  string[j] = '\0';
  return (string);
}
