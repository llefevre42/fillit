/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form_detector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 23:07:10 by llefevre          #+#    #+#             */
/*   Updated: 2017/05/02 15:16:41 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ligne_is_1(char *form, int i)
{
	if(form[i + 5] == '#' && form[i + 6] == '#' && form[i + 7] == '#')
		return (12);
	if(form[i + 4] == '#' && form[i + 5] == '#' && form[i + 6] == '#')
		return (17);
	if(form[i + 3] == '#' && form[i + 4] == '#' && form[i + 5] == '#')
		return (13);
	if(form[i + 5] == '#' && form[i + 6] == '#' && form[i + 10] == '#')
		return (16);
	if(form[i + 5] == '#' && form[i + 10] == '#' && form[i + 15] == '#')
		return (1);
	if(form[i + 4] == '#' && form[i + 5] == '#' && form[i + 10] == '#')
		return (18);
	if(form[i + 5] == '#' && form[i + 6] == '#' && form[i + 11] == '#')
		return (6);
	if(form[i + 4] == '#' && form[i + 5] == '#' && form[i + 9] == '#')
		return (7);
	if(form[i + 5] == '#' && form[i + 9] == '#' && form[i + 10] == '#')
		return (11);
	if(form[i + 5] == '#' && form[i + 10] == '#' && form[i + 11] == '#')
		return (10);
	return (0);
}

int		ligne_is_2(char *form, int i)
{
	if(form[i + 5] == '#' && form[i + 6] == '#')
		return (3);
	if(form[i + 4] == '#' && form[i + 5] == '#')
		return (4);
	if(form[i + 6] == '#' && form[i + 7] == '#')
		return (5);
	if(form[i + 5] == '#' && form[i + 10] == '#')
		return (14);
	if(form[i + 6] == '#' && form[i + 11] == '#')
		return (15);
	return (0);
}

int		ligne_is_3(char *form, int i)
{
	if(form[i + 5] == '#')
		return (8);
	if(form[i + 6] == '#')
		return (19);
	if(form[i + 7] == '#')
		return (9);
	return(0);
}

int		what_form(char *form)
{
	int i;

	i = 0;
	while(form[i] != '#')
		i++;
	if(form[i + 1] == '#' && form[i + 2] == '#' && form[i + 3] == '#')
   		return (2);
	if(form[i + 1] == '#' && form[i + 2] == '#')
		return (ligne_is_3(form, i));
	if(form[i + 1] == '#')
		return (ligne_is_2(form, i));
	else
		return (ligne_is_1(form, i));
}
