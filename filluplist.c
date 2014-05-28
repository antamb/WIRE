
#include "fdf.h"

int     filluplist(t_list *list, int fd)
{
  int   cpt;
  int   temp;
  char  *buffer;
  int   sizeread;
  char  *str;

  temp = 0;
  cpt  = 0;
  buffer = malloc ((SIZE_TO_READ + 1) * sizeof(*buffer));
  while ((sizeread = read(fd, buffer, SIZE_TO_READ)) > 0)
    {
      temp += sizeread;
      buffer[sizeread] = '\0';
      str = malloc((sizeread + 1) * sizeof(*str));
      cpt = -1;
      while (buffer[++cpt] != '\0')
        str[cpt] = buffer[cpt];
      str[cpt] = '\0';
      my_add_in_list(list, str);
    }
  free(buffer);
  return (temp);
}
