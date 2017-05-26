/*
** link.c for myll in /home/sylvain/Travail/Perso/myll/link.c
**
** Made by Sylvain CORSINI
** Login   <sylvain.corsini@epitech.eu>
**
** Started on  Thu May 25 16:40:00 2017 Sylvain CORSINI
** Last update Thu May 25 16:40:00 2017 Sylvain CORSINI
*/

#include	"myll.h"

t_my_llist	*myll_link(t_my_llist *llist, t_my_llist *elem_to_add)
{
  llist->right = elem_to_add;
  elem_to_add->left = llist;
  return (llist);
}
