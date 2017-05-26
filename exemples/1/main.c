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
  t_test	*test1;
  t_test	*test2;

  /* You have to malloc the elements. */
  test1 = malloc(sizeof(t_test));
  if (test1 == NULL)
    return (EXIT_FAILURE);
  test1->nb = 42;
  test2 = malloc(sizeof(t_test));
  if (test2 == NULL)
  {
    free(test1);
    return (EXIT_FAILURE);
  }
  test2->nb = 84;

  /* Call the link method on both elements. */
  myll_link(&test1->list, &test2->list);

  /* Loop over right elements. */
  t_test	*x;
  x = test1;
  while (x != NULL)
  {
    printf("%d\n", x->nb);
    /* Change pointer as in classic linked list but cast it into your own struct. */
    x = (t_test *) x->list.right;
  }

  /* Loop over left elements. */
  x = test2;
  while (x != NULL)
  {
    printf("%d\n", x->nb);
    x = (t_test *) x->list.left;
  }

  /* You also have to free elements. */
  free(test1);
  free(test2);
  return (EXIT_SUCCESS);
}
