/*
** link_right.c for myll in /home/sylvain/Travail/Perso/myll/link_right.c
**
** Made by Sylvain CORSINI
** Login   <sylvain.corsini@epitech.eu>
**
** Started on  Fri May 26 15:35:52 2017 Sylvain CORSINI
** Last update Fri May 26 15:35:52 2017 Sylvain CORSINI
*/

#include	<stddef.h>
#include	"myll.h"

t_my_llist	*myll_link_right(t_my_llist *llist, t_my_llist *elem_to_add)
{
  t_my_llist	*tmp;

  tmp = llist;
  while (tmp->right != NULL)
    tmp = tmp->right;
  tmp->right = elem_to_add;
  elem_to_add->left = tmp;
  return (llist);
}
