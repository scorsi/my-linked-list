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

t_my_llist	*myll_link(t_my_llist *llist1, t_my_llist *llist2)
{
  llist1->right = llist2;
  llist2->left = llist1;
  return (llist1);
}
