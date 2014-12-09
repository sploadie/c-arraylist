/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arraylist.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgauvrit <tgauvrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 11:50:42 by tgauvrit          #+#    #+#             */
/*   Updated: 2014/12/03 19:32:28 by tgauvrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"

void		set_arraylist_functions(t_arraylist *arlst)
{
	arlst->size = x_arraylist_size;
	arlst->resize = x_arraylist_resize;
	arlst->shift = x_arraylist_shift;
	arlst->push = x_arraylist_push;
	arlst->sort = x_arraylist_sort;
	arlst->del = x_arraylist_del;
}

t_arraylist	*arraylist(void *elem, size_t reset_buf)
{
	t_arraylist	*arlst;

	if (reset_buf < 1)
		return (NULL);
	arlst = malloc(sizeof(t_arraylist));
	if (!arlst)
		return (NULL);
	arlst->x_resbuf = reset_buf;
	arlst->x_tru_size = (reset_buf * 2) + 1;
	arlst->x_array = malloc(arlst->x_tru_size * sizeof(void*));
	if (!arlst->x_array)
		return (NULL);
	arlst->x_first_pos = reset_buf;
	arlst->x_last_pos = reset_buf;
	arlst->x_array[reset_buf] = elem;
	set_arraylist_functions(arlst);
	return (arlst);
}
