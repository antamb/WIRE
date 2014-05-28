
#include "fdf.h"
#include "mlx.h"

int	makeabs(int a, int b)
{
  if ((a - b) < 0)
    return (-(a - b));
  else
    return (a - b);
}

void	drawallline(t_pixel *pix, t_point p1, t_point p2, unsigned int color)
{
  if (p1.x == p2.x && p1.y == p2.y)
    put_pixel_to_image(pix, p2.x, p2.y, color);
  else
    {
      if (makeabs(p2.x, p1.x) < makeabs(p2.y, p1.y))
	{
	  if (p1.y <= p2.x && p1.y <= p2.y)
	    drawline2(pix, p1, p2, color);
	  else
	    drawline3(pix, p1, p2, color);
	}
      if (makeabs(p2.x, p1.x) >= makeabs(p2.y, p1.y))
	{
	  if (p1.x <= p2.x)
	    drawline1(pix, p1, p2, color);
	  else
	    drawline4(pix, p1, p2, color);
	}
    }
}
