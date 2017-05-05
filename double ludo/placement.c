/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placement.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 17:02:32 by llefevre          #+#    #+#             */
/*   Updated: 2017/05/05 21:24:22 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		placement(char **tab, int cote, int here, t_tri *lst, int qty)
{
	int x;
	int y;
	int	i;

	i = 0;
	if ((*lst).c == 0)
		return (1);
	if (here == (cote * cote))
		return (placement(tab, cote + 1, 0, lst, qty));
	x = (here / cote) % cote;
	y = here % cote;
	if (tab[x][y] != '.')
		return (placement(tab, cote, here + 1, lst, qty));
	while (i < qty)
	{
		if (tab[x + (*lst).coord[3]][y + (*lst).coord[2]] == '.' &&
				tab[x + (*lst).coord[5]][y + (*lst).coord[4]] == '.' &&
				tab[x + (*lst).coord[7]][y + (*lst).coord[6]] == '.')
		{
			tab[x + (*lst).coord[1]][y + (*lst).coord[0]] = (*lst).c;
			tab[x + (*lst).coord[3]][y + (*lst).coord[2]] = (*lst).c;
			tab[x + (*lst).coord[5]][y + (*lst).coord[4]] = (*lst).c;
			tab[x + (*lst).coord[7]][y + (*lst).coord[6]] = (*lst).c;
			if (placement(tab, cote, here, lst + 1, qty))
				return (1);
		}
		i++;
	}
	return (1);
}

