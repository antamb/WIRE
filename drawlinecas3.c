
#include "fdf.h"
#include "mlx.h"

void	drawline3(t_pixel *pix, t_point p1, t_point p2, unsigned int color)
{
  int y;

  y = p2.y;
  while (y <= p1.y)
    {
      put_pixel_to_image(pix, p1.x - ((p1.y - y) * 
				      (p1.x - p2.x) / (p1.y - p2.y)), y, color);
      y++;
    }
}
