
#include "fdf.h"
#include "mlx.h"

int	put_pixel_to_image(t_pixel *pix, int x, int y, unsigned int col)
{
  int	positpix;

  if (x < SIZE_WIN && y < SIZE_WIN && x >= 0 && y >= 0)
    {
      positpix = x * (pix->bpp / 8) + y * pix->size_line;
      bcopy(&col, pix->data + positpix, (pix->bpp / 8));
    }
  return (0);
}
