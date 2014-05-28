
#include "fdf.h"

int            fillupbigstr(t_list *list, char *bigstr)
{
  int           cpt;
  int           cptc;
  t_elem        *current;

  cpt = 0;
  current = list->end;
  while (current)
    {
      cptc = 0;
      while (current->data[cptc] != '\0')
        {
	  if ((current->data[cptc] < '0' || current->data[cptc] > '9') &&
	      current->data[cptc] != ' ' && current->data[cptc] != '\n')
	    return (0);
	  bigstr[cpt] = current->data[cptc];
          cpt++;
          cptc++;
        }
      current = current->previous;
    }
  bigstr[cpt] = '\0';
  return (1);
}
