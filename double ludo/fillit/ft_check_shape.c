/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_shape.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 23:07:10 by llefevre          #+#    #+#             */
/*   Updated: 2017/05/07 17:59:11 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
** shapes with 1 # on the first line
*/
static char		*ft_line_1(char *in, int i)
{
	if (in[i + 5] == '#' && in[i + 6] == '#' && in[i + 7] == '#')
		return ("00011121");
	if (in[i + 4] == '#' && in[i + 5] == '#' && in[i + 6] == '#')
		return ("00-110111");
	if (in[i + 3] == '#' && in[i + 4] == '#' && in[i + 5] == '#')
		return ("0001-11-21");
	if (in[i + 5] == '#' && in[i + 6] == '#' && in[i + 10] == '#')
		return ("00011102");
	if (in[i + 5] == '#' && in[i + 10] == '#' && in[i + 15] == '#')
		return ("00010203");
	if (in[i + 4] == '#' && in[i + 5] == '#' && in[i + 10] == '#')
		return ("00-110102");
	if (in[i + 5] == '#' && in[i + 6] == '#' && in[i + 11] == '#')
		return ("00011112");
	if (in[i + 4] == '#' && in[i + 5] == '#' && in[i + 9] == '#')
		return ("00-1101-12");
	if (in[i + 5] == '#' && in[i + 9] == '#' && in[i + 10] == '#')
		return ("000102-12");
	if (in[i + 5] == '#' && in[i + 10] == '#' && in[i + 11] == '#')
		return ("00010212");
	return ("GHI");
}

/*
** shapes with 2 # on the first line
*/
static char		*ft_line_2(char *in, int i)
{
	if (in[i + 5] == '#' && in[i + 6] == '#')
		return ("00011011");
	if (in[i + 4] == '#' && in[i + 5] == '#')
		return ("0010-1101");
	if (in[i + 6] == '#' && in[i + 7] == '#')
		return ("00101121");
	if (in[i + 5] == '#' && in[i + 10] == '#')
		return ("00100102");
	if (in[i + 6] == '#' && in[i + 11] == '#')
		return ("00101112");
	return ("DEF");
}

/*
** shapes with 3 # on the first line
*/
static char		*ft_line_3(char *in, int i)
{
	if (in[i + 5] == '#')
		return ("00102001");
	if (in[i + 6] == '#')
		return ("00102011");
	if (in[i + 7] == '#')
		return ("00102021");
	return ("ABC");
}

/*
** return shape code see ft_ref for more info
*/
char			*ft_check_shape(char *in)
{
	int i;

	i = 0;
	while (in[i] != '#')
		i++;
	if (in[i + 1] == '#' && in[i + 2] == '#' && in[i + 3] == '#')
   		return ("00102030");
	if (in[i + 1] == '#' && in[i + 2] == '#')
		return (ft_line_3(in, i));
	if (in[i + 1] == '#')
		return (ft_line_2(in, i));
	else
		return (ft_line_1(in, i));
}
