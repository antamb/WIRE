
#include "fdf.h"
#include "mlx.h"

int		calc_lg_case(int nbline, int nbel, int h)
{
  double        lg_case_x;
  double        lg_case_y;

  lg_case_x = (double)SIZE_WIN / ((double)nbel + (double)nbline * 
				  RACINE_2 + 2.0);
  lg_case_y = (double)SIZE_WIN / ((double)nbline * 
				  RACINE_2 + (double)h + 2.0);
  return (lg_case_x < lg_case_y ? lg_case_x : lg_case_y);
}
