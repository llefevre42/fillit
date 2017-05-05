/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_find_next.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 19:07:31 by llefevre          #+#    #+#             */
/*   Updated: 2017/05/01 19:11:02 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_sqrt_find_next(int nb)
{
	int res;

	res = 0;
	if (nb == 0)
		return (0);
	while ((res * res) < nb)
		res = res + 1;
	if ((res * res) == nb)
		return (res);
	else
		return (res + 1);
}
