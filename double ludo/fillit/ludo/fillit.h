/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thvocans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 14:57:57 by thvocans          #+#    #+#             */
/*   Updated: 2017/05/02 15:39:30 by thvocans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "./libft/libft.h"
# include <stdlib.h>
# include <fcntl.h>
# include <stdlib.h>


struct	s_tri
{
	int		c1[2];	//[0] => n-line [1] => n-col
	int		c2[2];	//[0] => n-line [1] => n-col
	int		c3[2];	//[0] => n-line [1] => n-col
	int		ref;
	char	c;		//???? nom/position de la piece
};
typedef struct s_tri t_tri;

#endif
