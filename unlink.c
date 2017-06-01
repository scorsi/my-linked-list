/*
** unlink.c for myll in /home/sylvain/Travail/Perso/myll/unlink.c
**
** Made by Sylvain CORSINI
** Login   <sylvain.corsini@epitech.eu>
**
** Started on  Wed May 31 16:15:52 2017 Sylvain CORSINI
** Last update Wed May 31 16:15:52 2017 Sylvain CORSINI
*/

#include <stddef.h>
#include "myll.h"

t_my_llist	*myll_unlink(t_my_llist *llist)
{
  t_my_llist	*ret;

  ret = NULL;
  if (llist->right != NULL)
  {
    llist->right->left = llist->left;
    ret = llist->right;
  }
  if (llist->left != NULL)
  {
    llist->left->right = llist->right;
    ret = llist->left;
  }
  llist->right = NULL;
  llist->left = NULL;
  return (ret);
}
