/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placement.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 17:02:32 by llefevre          #+#    #+#             */
/*   Updated: 2017/05/05 22:59:57 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		placement(char **tab, int cote, t_tri *lst)
{
	int x;
	int y;
	int	i;

	i = 0;
	if ((*lst).c == 0)
	{
		printf("TA MER\n");
		return (1);
	}
	while (i < cote * cote)
	{
		x = i % cote;
		y = i / cote;
		printf("x:%dy:%d\n",x, y);
		if (ft_valid_loc(lst, x, y, cote) != 0 &&
				tab[x + (*lst).coord[1]][y + (*lst).coord[0]] == '.' &&
				tab[x + (*lst).coord[3]][y + (*lst).coord[2]] == '.' &&
				tab[x + (*lst).coord[5]][y + (*lst).coord[4]] == '.' &&
				tab[x + (*lst).coord[7]][y + (*lst).coord[6]] == '.')
		{
			tab[x + (*lst).coord[1]][y + (*lst).coord[0]] = (*lst).c;
			tab[x + (*lst).coord[3]][y + (*lst).coord[2]] = (*lst).c;
			tab[x + (*lst).coord[5]][y + (*lst).coord[4]] = (*lst).c;
			tab[x + (*lst).coord[7]][y + (*lst).coord[6]] = (*lst).c;
			if (placement(tab, cote, lst + 1))
				return (1);
			else
			{
				tab[x + (*lst).coord[1]][y + (*lst).coord[0]] = '.';
				tab[x + (*lst).coord[3]][y + (*lst).coord[2]] = '.';
				tab[x + (*lst).coord[5]][y + (*lst).coord[4]] = '.';
				tab[x + (*lst).coord[7]][y + (*lst).coord[6]] = '.';
			}
		}
		i++;
	}
	return (0);
}


void fillit(char **tab, t_tri *lst)
{
	int cote;

	cote = 2;
	while (!placement(tab, cote, lst))
		cote++;	
}
