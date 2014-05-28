
#include "fdf.h"
#include "mlx.h"

void    drawline1(t_pixel *pix, t_point p1, t_point p2, unsigned int color)
{
  int x;

  x = p1.x;
  while (x <= p2.x)
    {
      put_pixel_to_image(pix, x, p2.y - ((p2.x - x) * 
					 (p2.y - p1.y) / (p2.x - p1.x)), color);
      x++;
    }
}
