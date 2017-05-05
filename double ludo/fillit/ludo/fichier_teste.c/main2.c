/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 18:57:15 by llefevre          #+#    #+#             */
/*   Updated: 2017/05/01 19:12:34 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		carre_min(int nb);

int		ft_sqrt_find_next(int nb);

int		main(void)
{
	int i1 = 10;
	int i2 = 26;
	int i3 = 3;
	int i4 = 1;
	int i5 = 4;

	ft_putnbr(carre_min(i1));
	ft_putchar('\n');
	ft_putnbr(carre_min(i2));
	ft_putchar('\n');
	ft_putnbr(carre_min(i3));
	ft_putchar('\n');
	ft_putnbr(carre_min(i4));
	ft_putchar('\n');
	ft_putnbr(carre_min(i5));
	ft_putchar('\n');
}
