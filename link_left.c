/*
** link_left.c for myll in /home/sylvain/Travail/Perso/myll/link_left.c
**
** Made by Sylvain CORSINI
** Login   <sylvain.corsini@epitech.eu>
**
** Started on  Fri May 26 15:48:11 2017 Sylvain CORSINI
** Last update Fri May 26 15:48:11 2017 Sylvain CORSINI
*/

#include	<stddef.h>
#include	"myll.h"

t_my_llist	*myll_link_left(t_my_llist *llist, t_my_llist *elem_to_add)
{
  t_my_llist	*tmp;

  tmp = llist;
  while (tmp->left != NULL)
    tmp = tmp->left;
  tmp->left = elem_to_add;
  elem_to_add->right = tmp;
  return (llist);
}
