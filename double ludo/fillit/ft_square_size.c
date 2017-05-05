/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 18:43:25 by llefevre          #+#    #+#             */
/*   Updated: 2017/05/02 15:42:10 by thvocans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_square_size(int pieces)
{
	int		area;
	int		sqrt;

	area = pieces * 4;
	sqrt = 0;
	if (area == 0)
		return (0);
	while ((sqrt * sqrt) < area)
			sqrt++;
	if (sqrt * sqrt == area)
		return (sqrt);
	else
		return (sqrt + 1);
}
