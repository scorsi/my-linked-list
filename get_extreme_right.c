/*
** get_extreme_right.c for myll in /home/sylvain/Travail/Perso/myll/get_extreme_right.c
**
** Made by Sylvain CORSINI
** Login   <sylvain.corsini@epitech.eu>
**
** Started on  Thu Jun 01 11:03:35 2017 Sylvain CORSINI
** Last update Thu Jun 01 11:03:35 2017 Sylvain CORSINI
*/

#include	<stddef.h>
#include	"myll.h"

t_my_llist	*myll_get_extreme_right(t_my_llist *llist)
{
  t_my_llist	*item;

  item = llist;
  if (item == NULL)
    return (NULL);
  while (item->right != NULL)
  {
    item = item->right;
  }
  return (item);
}
