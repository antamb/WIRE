
#include "fdf.h"
#include "mlx.h"

void    drawline2(t_pixel *pix, t_point p1, t_point p2, unsigned int color)
{
  int y;

  y = p1.y;
  while (y <= p2.y)
    {
      put_pixel_to_image(pix, p2.x - ((p2.y - y) * 
				      (p2.x - p1.x) / (p2.y - p1.y)), y, color);
      y++;
    }
}
