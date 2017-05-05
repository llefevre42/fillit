/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thvocans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 14:57:57 by thvocans          #+#    #+#             */
/*   Updated: 2017/05/05 22:28:16 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "./libft/libft.h"
# include <stdlib.h>
# include <fcntl.h>
# include <stdlib.h>
# define BUFSIZE 256

#include <stdio.h>

struct	s_tri
{
	int		coord[8];
	char	__padding[3];
	char	c;		//???? nom/position de la piece
};
typedef struct s_tri t_tri;

char	*ft_read(char *av);
char	**ft_split_pieces(char *in);
int		ft_check_char(char *in);
int		ft_check_format(char **str);
char	*ft_check_shape(char *in);
int		ft_square_size(int pieces);
void	ft_error(int i);
int		ft_valid_loc(t_tri *lst, int x, int y, int cote);
void	ft_save_shape(t_tri **lst, char **split, int qty);
void	ft_struct_fill(t_tri *lst, char *coord);
void	fillit(char **tab, t_tri *lst);

#endif
