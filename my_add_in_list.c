
#include "fdf.h"

void            my_add_in_list(t_list *list, char *data)
{
  t_elem	*newelem;

  newelem = malloc(sizeof(*newelem));
  newelem->previous = 0;
  newelem->data = data;
  newelem->next = list->begin;
  if (list->begin != 0)
    list->begin->previous = newelem;
  list->begin = newelem;
  if (list->end == 0)
    list->end = newelem;
  list->len++;
}
