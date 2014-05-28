
#include "fdf.h"
#include "mlx.h"

int		main(int ac, char **av)
{
  t_var		s;

  ac = ac;
  s.fd = open(av[1], O_RDONLY);
  if (s.fd < 0)
    return (0);
  if ((s.pix.data = getline(s.fd)) == NULL)
    return (0);
  s.nbline = nblines(s.pix.data);
  s.nbel = countnumb(s.pix.data);
  if ((s.tab2d = chang2d(s.pix.data, s.nbline, s.nbel)) == NULL)
    return (0);
  if ((s.pix.mlx = mlx_init()))
    if ((s.pix.win = mlx_new_window(s.pix.mlx, SIZE_WIN, SIZE_WIN, "fdf!!!")))
      if ((s.pix.img = mlx_new_image(s.pix.mlx, SIZE_WIN, SIZE_WIN)))
	{
	  s.pix.data = mlx_get_data_addr(s.pix.img, &s.pix.bpp, 
					 &s.pix.size_line, &s.pix.endian);
	  linkpoint(&s, 0x000080);
	  mlx_put_image_to_window(s.pix.mlx, s.pix.win, s.pix.img, 0, 0);
	  mlx_expose_hook(s.pix.win, &gerexpose, &s.pix);
	  mlx_key_hook(s.pix.win, &gerekey, &s.pix);
	  mlx_loop(s.pix.mlx);
	}
  return (0);
}
