/*
** myll.h for myll in /home/sylvain/Travail/Perso/myll/myll.h
**
** Made by Sylvain CORSINI
** Login   <sylvain.corsini@epitech.eu>
**
** Started on  Thu May 25 14:13:03 2017 Sylvain CORSINI
** Last update Thu May 25 14:13:03 2017 Sylvain CORSINI
*/

#ifndef MY_LINKED_LIST_H
# define MY_LINKED_LIST_H

# include	<errno.h>

typedef		struct s_my_llist		t_my_llist;

typedef		t_my_llist *(*t_myll_func)(t_my_llist *);

t_my_llist	*myll_link(t_my_llist *llist, t_my_llist *elem_to_add);
t_my_llist	*myll_link_right(t_my_llist *llist, t_my_llist *elem_to_add);
t_my_llist	*myll_link_left(t_my_llist *llist, t_my_llist *elem_to_add);
t_my_llist	*myll_init(t_my_llist *llist);

struct		s_my_llist
{
  t_my_llist	*left;
  t_my_llist	*right;
};

# ifdef		MYLL_TINY_DEF
typedef		struct s_my_llist		t_myll;
# endif		/* MYLL_TINY_DEF */

#endif //MY_LINKED_LIST_H
