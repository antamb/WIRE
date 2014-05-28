
#define SIZE_TO_READ 1024
#define ECHAP 65307
#define	SIZE1 900
#define	SIZE2 800
#define SIZE_WIN 1000
#include <sys/types.h>
#include <stdlib.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <strings.h>
#define RACINE_2 (double)(0.707106781)
#define POSX(x, y) (((double)y * RACINE_2 + (double)x))
#define POSY(y, z) (((double)y * RACINE_2 + (double)z))

typedef struct	s_pixel
{
  char		*data;
  int		size_line;
  int		bpp;
  int		endian;
  unsigned int	color;
  void          *mlx;
  void          *img;
  void          *win;
  int		keycode;
  int		nbline;
  int		nbel;
}		t_pixel;

typedef struct  s_point
{
  int           x;
  int           y;
}               t_point;

typedef struct	s_pos
{
  int		i;
  int		j;
}		t_pos;

typedef struct s_elem
{
  char          *data;
  struct s_elem *previous;
  struct s_elem *next;
}               t_elem;

typedef struct s_list
{
  t_elem *begin;
  t_elem *end;
  int    len;
}       t_list;

typedef struct  s_var
{
  t_pos         pos;
  char          *strg;
  int           h;
  double        real_x;
  double        real_y;
  int           lgc;
  t_point       dec;
  t_point       **tab2d;
  int           i;
  t_pixel       pix;
  t_pixel       *pixel;
  int           nbline;
  int           nbel;
  int           fd;
}               t_var;

int     fillupbigstr(t_list *list, char *bigstr);
int     filluplist(t_list *list, int fd);
void    my_add_in_list(t_list *list, char *data);
void    test(char *str, int *i, t_pos *pos);
void    epurspace(char *str, int *cpt);
char    *getline(int fd);
char    *fills(char *str, int *i);
void    drawline3(t_pixel *pix, t_point p1, t_point p2,unsigned int color);
t_point calc_dec(int nbline, int nbel, int h, int lg_case);
int     calc_lg_case(int nbline, int nbel, int h);
int     hmax(char *str);
t_point	**malloctab(int nbline, int nbel);
int	gerexpose(void *param);
void    initializ(t_pos *pos, int *i);
int	gerekey(int keycode, void *param);
void    epurstr(char **str);
void    drawline4(t_pixel *pix, t_point p1, t_point p2,unsigned int color);
int     my_get_nbr(char *nbr);
int	my_strlen(char *str);
void    reset(t_list *list);
void    my_putstr(char *str);
void    drawallline(t_pixel *pix, t_point p1, t_point p2, unsigned int color);
int     put_pixel_to_image(t_pixel *pix, int x, int y, unsigned int col);
void    linkpoint(t_var *s, unsigned int col);
t_point **chang2d(char *str, int nbline, int nbel);
void    drawline1(t_pixel *pix, t_point p1, t_point p2,unsigned int color);
void    drawline2(t_pixel *pix, t_point p1, t_point p2,unsigned int color);
void    freelist(t_list *list);
int     countnumb(char *str);
int     nblines(char *str);
