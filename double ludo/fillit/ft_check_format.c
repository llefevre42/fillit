/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 17:47:23 by llefevre          #+#    #+#             */
/*   Updated: 2017/05/02 18:45:30 by thvocans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_format(char **str)
{
	int i;
	int j;
	int pt;
	int	shrp;

	i = 0;
	while (str[i] != 0)
	{
		pt = 0;
		shrp = 0;
		j = 0;
		while (str[i][j] != '\0')
		{
			if (str[i][j] == '.')
				pt++;
			if (str[i][j] == '#')
				shrp++;
			j++;
		}
		if (j != 20 || pt != 12 || shrp != 4)
			return (0);
		i++;
	}
	return (i);
}
