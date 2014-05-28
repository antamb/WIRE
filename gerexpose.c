
#include "fdf.h"
#include "mlx.h"

int		gerexpose(void *param)
{
  t_pixel	*pix;

  pix = (t_pixel *) param;
  mlx_clear_window(pix->mlx, pix->win);
  mlx_put_image_to_window(pix->mlx, pix->win, pix->img, 0, 0);
  return (1);
}
