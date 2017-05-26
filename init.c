/*
** init.c for myll in /home/sylvain/Travail/Perso/myll/init.c
**
** Made by Sylvain CORSINI
** Login   <sylvain.corsini@epitech.eu>
**
** Started on  Fri May 26 15:12:17 2017 Sylvain CORSINI
** Last update Fri May 26 15:12:17 2017 Sylvain CORSINI
*/

#include	<stddef.h>
#include	"myll.h"

t_my_llist	*myll_init(t_my_llist *llist)
{
  llist->left = NULL;
  llist->right = NULL;
  return (llist);
}
