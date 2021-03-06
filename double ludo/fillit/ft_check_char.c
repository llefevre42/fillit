/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 17:52:09 by llefevre          #+#    #+#             */
/*   Updated: 2017/05/03 21:49:00 by thvocans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_char(char *in)
{
	int i;

	i = 0;
	while (in[i] != '\0')
	{
		if (in[i] != '.' && in[i] != '#' && in[i] != '\n')
			return (0);
		i++;
	}
	if (in[i] == '\0' && in[i - 1] == '\n' && in[i - 2] == '\n')
		return (0);
	return (1);
}
