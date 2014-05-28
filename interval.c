
#include "fdf.h"
#include "mlx.h"

t_point         calc_dec(int nbline, int nbel, int h, int lg_case)
{
  t_point       dec;

  dec.x = ((double)SIZE_WIN - ((double)nbel + (double)nbline * 
			       RACINE_2) * (double)lg_case) / 2.0 - lg_case / 2;
  dec.y = ((double)SIZE_WIN - ((double)nbline * RACINE_2 + 
			       (double)h) * (double)lg_case) / 2.0 - lg_case / 2;
  return (dec);
}
