/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_arlst_iter_pip.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgauvrit <tgauvrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 15:51:23 by tgauvrit          #+#    #+#             */
/*   Updated: 2014/11/24 18:44:11 by tgauvrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"

void	*x_arlst_iter_pip(struct s_arlst_iter *iter, int *ret)
{
	if (iter->x_is_end)
	{
		*ret = -1;
		return (NULL);
	}
	if (iter->x_first_pos == iter->x_last_pos)
	{
		iter->x_is_end = 1;
		*ret = 0;
		return (iter->arlst->x_array[iter->x_first_pos]);
	}
	*ret = 1;
	return (iter->arlst->x_array[iter->x_first_pos++]);
}
