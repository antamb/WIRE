
#include "fdf.h"
#include "mlx.h"

void	drawline4(t_pixel *pix, t_point p1, t_point p2, unsigned int color)
{
  int	x;

  x = p2.x;
  while (x <= p1.x)
    {
      put_pixel_to_image(pix, p1.y - ((p1.x - x) * 
				      (p1.x - p2.x) / (p1.x - p2.x)), x, color);
      x++;
    }
}
