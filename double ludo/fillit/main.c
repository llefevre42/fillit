/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thvocans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 14:57:12 by thvocans          #+#    #+#             */
/*   Updated: 2017/05/06 18:35:35 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_error(int i)
{
	if (i == 0)
	{
		ft_putstr("error\n");
		exit(1);
	}
}

int		main(int ac, char **av)
{
	char	*input;
	char	**split;
	int		i;
	int		qty;
	t_tri	*lst;
	char	**output;

	output = malloc(sizeof(char*)*15);
	for (int k = 0; k < 15; k++)
	{
		output[k] = malloc(sizeof(char)*15);
		for (int h = 0; h < 15; h++)
			output[k][h] = '.';
		output[k][15] = '\0';
	}
	output[15] = 0;
	i = -1;
	if (ac == 2)
	{
		input = ft_read(av[1]);
		if (!input)
			ft_error(0);
		ft_error(ft_check_char(input));
		split = ft_split_pieces(input);
		ft_error((qty = ft_check_format(split)));
		if (!(lst = malloc(sizeof(t_tri) * (size_t)(qty + 1))))
			ft_error(0);
		printf("qty_main:%d\n",qty);
		ft_save_shape(&lst, split, qty);
		fillit(output, lst);		
		ft_puttab(output);
/*		while (++i < qty)
		{	
			for (int k = 0; k < 8; k++)
				printf("%d|",lst[i].coord[k]);
			printf("\n");
		}
*/	}
	exit(0);
}
