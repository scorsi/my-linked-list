/*
** get_extreme_left.c for myll in /home/sylvain/Travail/Perso/myll/get_extreme_left.c
**
** Made by Sylvain CORSINI
** Login   <sylvain.corsini@epitech.eu>
**
** Started on  Thu Jun 01 11:19:15 2017 Sylvain CORSINI
** Last update Thu Jun 01 11:19:15 2017 Sylvain CORSINI
*/

#include	<stddef.h>
#include	"myll.h"

t_my_llist	*myll_get_extreme_left(t_my_llist *llist)
{
  t_my_llist	*item;

  item = llist;
  if (item == NULL)
    return (NULL);
  while (item->left != NULL)
  {
    item = item->left;
  }
  return (item);
}
