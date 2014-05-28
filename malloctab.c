
#include "fdf.h"

t_point		**malloctab(int nbline, int nbel)
{
  int		i;
  t_point	**tab2d;

  tab2d = malloc((nbline + SIZE_WIN) * sizeof(*tab2d));
  if (tab2d == 0)
    return (NULL);
  i = 0;
  while (i < nbline)
    {
      tab2d[i] = malloc((nbel + SIZE_WIN) * sizeof(**tab2d));
      if (tab2d[i] == 0)
	return (NULL);
      i++;
    }
  return (tab2d);
}
