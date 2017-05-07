/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_loc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thvocans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 21:20:38 by thvocans          #+#    #+#             */
/*   Updated: 2017/05/07 14:51:20 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_valid_loc(t_tri *lst, int x, int y, int cote)
{
	int i;

	i = 0;
	while (i < 8)
	{
		if (y + (*lst).coord[i] < 0 || y + (*lst).coord[i] > cote - 1)
			return(0);
		i++;
		if (x + (*lst).coord[i] < 0 || x + (*lst).coord[i] > cote - 1)
			return (0);
		i++;
	}
	return (1);
}
