/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_shape.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thvocans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 19:09:20 by thvocans          #+#    #+#             */
/*   Updated: 2017/05/06 18:16:23 by llefevre         ###   ########.fr       */
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
