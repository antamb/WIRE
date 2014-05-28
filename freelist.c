
#include "fdf.h"

void    freelist(t_list *list)
{
  t_elem        *current;

  current = list->end;
  while (current)
    {
      free(current->data);
      free(current->next);
      current = current->previous;
    }
}
