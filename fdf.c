
#include "fdf.h"
#include "mlx.h"

void		linkpoint(t_var *s, unsigned int col)
{
  t_pos		pos;

  pos.i = -1;
  while (++pos.i < s->nbline)  
    {
      pos.j = -1;
      while (++pos.j < s->nbel)
	{
	  if (pos.j < (s->nbel - 1))
	    drawallline(&s->pix, s->tab2d[pos.i][pos.j], 
			s->tab2d[pos.i][pos.j + 1], col);
	  if (pos.i < (s->nbline - 1))
	    drawallline(&s->pix, s->tab2d[pos.i][pos.j], 
			s->tab2d[pos.i + 1][pos.j], col);
	}
    }
}
