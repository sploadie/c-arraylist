/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_arraylist_size.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgauvrit <tgauvrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 13:07:33 by tgauvrit          #+#    #+#             */
/*   Updated: 2014/11/24 18:43:59 by tgauvrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"

size_t	x_arraylist_size(t_arraylist *arlst)
{
	return ((arlst->x_last_pos - arlst->x_first_pos) + 1);
}
