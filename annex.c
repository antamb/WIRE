
#include "fdf.h"
#include "mlx.h"

void    initializ(t_pos *pos, int *i)
{
  if ((*i) == 0)
    {
      pos->i = 0;
      pos->j = 0;
    }
}

void	test(char *str, int *i, t_pos *pos)
{
  if (str[(*i)] == '\n' || str[(*i)] == '\0')
    {
      pos->i++;
      pos->j = 0;
    }
  if (str[(*i)] < 48 || str[(*i)] > 57)
    (*i)++;
}
