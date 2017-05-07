/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coorduct_fill.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thvocans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 19:19:40 by thvocans          #+#    #+#             */
/*   Updated: 2017/05/06 18:16:43 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_struct_fill(t_tri *lst, char *coord)
{
	int neg;
	int i;
	int j;

	i = 0;
	j = 0;
	neg = 1;
	printf("%s\n", coord);
	while (coord[i] != '\0')
	{
		if (coord[i] == '-')
		{
			neg = -1;
			i++;
		}
		lst->coord[j] = (coord[i] - '0') * neg;
		neg = 1;
		i++;
		j++;
	}
}
