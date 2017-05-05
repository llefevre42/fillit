/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_loc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thvocans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 21:20:38 by thvocans          #+#    #+#             */
/*   Updated: 2017/05/05 23:00:00 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_valid_loc(t_tri *lst, int x, int y, int cote)
{
	int i;

	i = 0;
	while (i < 8)
	{
		if (x + (*lst).coord[i + 1] < 0 || y + (*lst).coord[i] < 0 ||
				x + (*lst).coord[i + 1] > cote || y + (*lst).coord[i] > cote)
			return (0);
		i += 2;
	}
	return (1);
}
