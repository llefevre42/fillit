/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 17:59:26 by llefevre          #+#    #+#             */
/*   Updated: 2017/05/02 15:11:38 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_filtre_double_n(char *s);

void	ft_print_words_tables(char **tab);

int		main(void)
{
	char char2[] =".................########\n\n\n...";
	char char1[] ="....\n....\n####\n...\n\n..#.\n..#.\n..#.\n..#.\n\n....\n....\n..#.\n.###\n\n..#.\n..#.\n.##.\n....\n";
	char char4[] ="..#.\n..#.\n..#.\n..#.\n\n..#.\n..#.\n..#.\n..#.\n\n..#.\n..#.\n..#.\n..#.\n\n..#.\n..#.\n..#.\n..#.\n";
	char char5[] ="..#.\n..#.\n..#.\n..#.\n\n..#.\n..#.\n..#.\n..#.\n\n..#.\n..#.\n..#.\n..#.\n\n..#.\n..#.\n..#.\n..#.\n";
	char char3[] ="..#.\n..#.\n..#.\n..#.\n\n..#.\n..#.\n..#.\n..#.\n\n..#.\n..#.\n..#.\n..#.\n\n..#.\n..#.\n..#.\n..#.\n";

	char **j1;
	char **j2;
	char **j3;
	char **j4;
	char **j5;

	j1 = ft_filtre_double_n(char1);
	ft_print_words_tables(j1);
	ft_putchar('\n');
	j2 = ft_filtre_double_n(char2);
	ft_print_words_tables(j2);
	ft_putchar('\n');
	j3 = ft_filtre_double_n(char3);
	ft_print_words_tables(j3);
	ft_putchar('\n');
	j4 = ft_filtre_double_n(char4);
	ft_print_words_tables(j4);
	ft_putchar('\n');
	j5 = ft_filtre_double_n(char5);
	ft_print_words_tables(j5);
	ft_putchar('\n');
	return (0);
}
