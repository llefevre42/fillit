/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placement.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 17:02:32 by llefevre          #+#    #+#             */
/*   Updated: 2017/05/02 18:05:36 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	placement(char **tab, int air,int here)
{
	int x;
	int y;

	if (here == (air * 4))
		return (tab, air + 1, 0);
	x = here / (air * 4);
	y = here % (air * 4);
	if (tab[x][y] != '.')
		return (placement(tab, air, here + 1));
	while(/*struct*/)
	{
		if(c1 == '.' && c2 == '.' && c3 == '.')
		{
			tab[x][y] == /*char struct*/
			tab[x + c1][y + c1] == /*char struct*/
			tab[x + c2][y + c2] == /*char struct*/
			tab[x + c3][y + c3] == /*char struct*/
			if (placement(tab, air, here))
				return (1);
		}
		/*incremente le while de la struct*/
	}
	return (0);
}
