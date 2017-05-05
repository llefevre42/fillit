/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_shape.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thvocans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 19:09:20 by thvocans          #+#    #+#             */
/*   Updated: 2017/05/04 18:46:55 by thvocans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_save_shape(t_tri **lst, char **split, int qty)
{
	int		i;

	i = 0;
	while (i < qty)
	{
		ft_struct_fill(&lst[0][i], ft_check_shape(split[i]));
		lst[0][i].c = (char)('A' + i);
		i++;
	}
	lst[0][i].c = 0;
}
