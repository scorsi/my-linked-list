/*
** main.c for myll in /home/sylvain/Travail/Perso/myll/exemples/1/main.c
**
** Made by Sylvain CORSINI
** Login   <sylvain.corsini@epitech.eu>
**
** Started on  Fri May 26 10:16:24 2017 Sylvain CORSINI
** Last update Fri May 26 10:16:24 2017 Sylvain CORSINI
*/

/* Permits to use t_myll instead of t_my_llist. */
#define MYLL_TINY_DEF

#include <stdlib.h>
#include <stdio.h>
#include "myll.h"

struct s_test
{
  /* Do not put the linked list struct as pointer! */
  t_myll	list;
  int		nb;
};

typedef struct s_test t_test;

int main()
{
  t_test	*llist;
  t_test	*new;

  /* You have to malloc your elements. */
  llist = malloc(sizeof(t_test));
  llist->nb = 0;
  /* Init the list. */
  myll_init(&llist->list);
  /* Create 4 other elements. */
  for (int i = 1; i < 5; ++i)
  {
    new = malloc(sizeof(t_test));
    /* Init the list. */
    myll_init(&new->list);
    /* Call the link method. */
    myll_link_right(&llist->list, &new->list);
    new->nb = i;
  }

  /* Loop over right elements. */
  t_test	*tmp;
  tmp = llist;
  while (tmp != NULL)
  {
    printf("%d\n", tmp->nb);
    /* Change pointer as in classic linked list but cast it into your own struct. */
    tmp = (t_test *) tmp->list.right;
  }

  /* You have to free your elements. */
  return (EXIT_SUCCESS);
}
