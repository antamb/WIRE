
#include "fdf.h"

t_point		**chang2d(char *str, int nbline, int nbel)
{
  t_var		s;  

  s.i = 0;
  s.h = hmax(str);
  if ((s.tab2d = malloctab(nbline, nbel)) == NULL)
    return (NULL);
  initializ(&s.pos, &s.i);
  epurstr(&str);
  s.lgc = calc_lg_case(nbline, nbel, s.h);
  s.dec = calc_dec(nbline, nbel, s.h, s.lgc);
  while (str[s.i] != '\0')
    {
      s.strg = fills(str, &s.i);
      if (s.strg[0] != '\0')
        {
	  s.tab2d[s.pos.i][s.pos.j].x = s.dec.x + POSX(s.pos.j, s.pos.i) * s.lgc;
	  s.tab2d[s.pos.i][s.pos.j].y = SIZE_WIN - \
	    (s.dec.y + POSY(s.pos.i, my_get_nbr(s.strg)) * s.lgc);
	  s.pos.j++;
        }
      test(str, &s.i, &s.pos);
    }
  s.tab2d[s.pos.i] = 0;
  free(s.strg);
  return (s.tab2d);
}
