/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_arraylist_push.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgauvrit <tgauvrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 14:41:56 by tgauvrit          #+#    #+#             */
/*   Updated: 2014/11/24 18:43:23 by tgauvrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"

void	x_arraylist_push(t_arraylist *arlst, void *elem)
{
	if (arlst->x_last_pos == arlst->x_tru_size - 1)
		arlst->resize(arlst, arlst->x_resbuf);
	arlst->x_array[++arlst->x_last_pos] = elem;
}
