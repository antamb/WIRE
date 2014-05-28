
#include "fdf.h"

char		*getline(int fd)
{
  t_list	*list;
  char		*bigstr;
  int		temp;

  list = malloc(sizeof(*list));
  reset(list);
  temp = filluplist(list, fd);
  if (temp == -1)
    return (NULL);
  bigstr = malloc((temp + 1) * sizeof(*bigstr));
  if (fillupbigstr(list, bigstr) == 0)
    return(NULL);
  freelist(list);
  free(list);
  return (bigstr);
}
