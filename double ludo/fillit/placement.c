/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placement.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 17:02:32 by llefevre          #+#    #+#             */
/*   Updated: 2017/05/07 17:58:20 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
size_t number = 0;
static int		placement(char **tab, int cote, t_tri *lst, int i)
{
	int x;
	int y;

//	printf("%lu",number++);
	if ((*lst).c == 0)
		return (1);
	while (i < cote * cote)
	{
		x = i / cote;
		y = i % cote;
//			printf("i:%d	cote:%d	x:%d	y:%d\n", i, cote, x, y);
		if (ft_valid_loc(lst, x, y, cote) != 0 &&
				tab[x + (*lst).coord[1]][y + (*lst).coord[0]] == '.' &&
				tab[x + (*lst).coord[3]][y + (*lst).coord[2]] == '.' &&
				tab[x + (*lst).coord[5]][y + (*lst).coord[4]] == '.' &&
				tab[x + (*lst).coord[7]][y + (*lst).coord[6]] == '.')
		{
//			printf("i:%d	cote:%d	x:%d	y:%d\n", i, cote, x, y);
			tab[x + (*lst).coord[1]][y + (*lst).coord[0]] = (*lst).c;
			tab[x + (*lst).coord[3]][y + (*lst).coord[2]] = (*lst).c;
			tab[x + (*lst).coord[5]][y + (*lst).coord[4]] = (*lst).c;
			tab[x + (*lst).coord[7]][y + (*lst).coord[6]] = (*lst).c;
			printf("x+c1:%d		y+c0:%d\n",x + (*lst).coord[1],y + (*lst).coord[0]);
			printf("x+c3:%d		y+c2:%d\n",x + (*lst).coord[3],y + (*lst).coord[2]);
			printf("x+c5:%d		y+c4:%d\n",x + (*lst).coord[5],y + (*lst).coord[4]);
			printf("x+c7:%d		y+c6:%d\n",x + (*lst).coord[7],y + (*lst).coord[6]);
			system("clear");
			ft_puttab(tab);
			printf("\n");
			if (placement(tab, cote, lst + 1, 0))
				return (1);
			else
			{
				tab[x + (*lst).coord[1]][y + (*lst).coord[0]] = '.';
				tab[x + (*lst).coord[3]][y + (*lst).coord[2]] = '.';
				tab[x + (*lst).coord[5]][y + (*lst).coord[4]] = '.';
				tab[x + (*lst).coord[7]][y + (*lst).coord[6]] = '.';
/*			printf("resetx+c1:%d		y+c0:%d\n",x + (*lst).coord[1],y + (*lst).coord[0]);
			printf("resetx+c3:%d		y+c2:%d\n",x + (*lst).coord[3],y + (*lst).coord[2]);
			printf("resetx+c5:%d		y+c4:%d\n",x + (*lst).coord[5],y + (*lst).coord[4]);
			printf("resetx+c7:%d		y+c6:%d\n",x + (*lst).coord[7],y + (*lst).coord[6]);
*/			}
		}
		i++;
	}
	return (0);
}


void	fillit(char **tab, t_tri *lst)
{
	int cote;

	cote = 2;
	while (!placement(tab, cote, lst, 0))
	{
		cote++;	
		printf("-------------------------\n");
	}
	printf("%d", cote);
}
