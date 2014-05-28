
#include "mlx.h"
#include "fdf.h"

int		gerekey(int keycode, void *param)
{
  t_pixel	*pix;

  pix = (t_pixel *) param;
  if (keycode == ECHAP)
    {
      mlx_destroy_window(pix->mlx, pix->win);
      exit(-1);
    }
  pix->keycode = keycode;
  return (1);
}
