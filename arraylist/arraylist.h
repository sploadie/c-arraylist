/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arraylist.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgauvrit <tgauvrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:02:07 by tgauvrit          #+#    #+#             */
/*   Updated: 2014/12/03 19:38:38 by tgauvrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAYLIST_H
# define ARRAYLIST_H

# include "libft.h"

typedef struct		s_arraylist
{
	void			**x_array;
	size_t			x_resbuf;
	size_t			x_first_pos;
	size_t			x_last_pos;
	size_t			x_tru_size;

	size_t			(*size)(struct s_arraylist *arlst);
	void			(*resize)(struct s_arraylist *arlst, size_t buf);
	void			(*shift)(struct s_arraylist *arlst, void *elem);
	void			(*push)(struct s_arraylist *arlst, void *elem);
	void			(*sort)(struct s_arraylist *arlst, int (*cmp)());
	void			(*del)(struct s_arraylist *arlst);
}					t_arraylist;

typedef struct		s_arlst_iter
{
	t_arraylist		*arlst;
	int				x_is_end;
	size_t			x_first_pos;
	size_t			x_last_pos;

	void			*(*pop)(struct s_arlst_iter *iter, int *ret);
	void			*(*pip)(struct s_arlst_iter *iter, int *ret);
}					t_arlst_iter;

t_arraylist			*arraylist(void *elem, size_t reset_buf);
size_t				x_arraylist_size(struct s_arraylist *arlst);
void				x_arraylist_resize(struct s_arraylist *arlst, size_t buf);
void				x_arraylist_shift(struct s_arraylist *arlst, void *elem);
void				x_arraylist_push(struct s_arraylist *arlst, void *elem);
void				x_arraylist_sort(t_arraylist *arlst, int (*cmp)());
void				x_arraylist_del(t_arraylist *arlst);

t_arlst_iter		*arlst_iter(struct s_arraylist *arlst);
void				*x_arlst_iter_pop(struct s_arlst_iter *iter, int *ret);
void				*x_arlst_iter_pip(struct s_arlst_iter *iter, int *ret);

#endif
