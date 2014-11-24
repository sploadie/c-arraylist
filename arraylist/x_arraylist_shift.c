/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_arraylist_shift.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgauvrit <tgauvrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 14:41:56 by tgauvrit          #+#    #+#             */
/*   Updated: 2014/11/24 18:43:47 by tgauvrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"

void	x_arraylist_shift(t_arraylist *arlst, void *elem)
{
	if (arlst->x_first_pos == 0)
		arlst->resize(arlst, arlst->x_resbuf);
	arlst->x_array[--arlst->x_first_pos] = elem;
}
