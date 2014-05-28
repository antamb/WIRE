
#include "fdf.h"

int	nblines(char *str)
{
  int	i;
  int	nblines;

  nblines = 0;
  epurstr(&str);
  i = 0;  
  while (str[i] != '\0')
    {
      if (str[i] == '\n')
	nblines++;
      i++;
    }
  return (nblines + 1);
}
