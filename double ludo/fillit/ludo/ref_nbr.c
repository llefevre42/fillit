/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref_nbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 23:26:58 by llefevre          #+#    #+#             */
/*   Updated: 2017/05/01 21:50:16 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ref_nbr5(int piece)
{
	if(piece == 13)					//   L
	{								// LLL
		c1[x + 0][y + 0];
		c2[x + 0][y + 1];
		c3[x - 1][y + 1];
		c4[x - 2][y + 1];
	}
	if(piece == 14)					// LL
	{								// L
		c1[x + 0][y + 0];			// L
		c2[x + 1][y + 0];
		c3[x + 0][y + 1];
		c4[x + 0][y + 2];
	}
	if(piece == 15)					// LL
	{								//  L
		c1[x + 0][y + 0];			//  L
		c2[x + 1][y + 0];
		c3[x + 1][y + 1];
		c4[x + 1][y + 2];
	}
	else
		ref_nbr6(int piece);
}

void	ref_nbr4(int piece)
{
	if(piece == 10)					// L
	{								// L
		c1[x + 0][y + 0];			// LL
		c2[x + 0][y + 1];
		c3[x + 0][y + 2];
		c4[x + 1][y + 2];
	}
	if(piece == 11)					//  L
	{								//  L
		c1[x + 0][y + 0];			// LL
		c2[x + 0][y + 1];
		c3[x + 0][y + 2];
		c4[x - 1][y + 2];
	}
	if(piece == 12)					// L
	{								// LLL
		c1[x + 0][y + 0];
		c2[x + 0][y + 1];
		c3[x + 1][y + 1];
		c4[x + 1][y + 2];
	}
	else
		ref_nbr5(int piece);
}

void	ref_nbr3(int piece)
{
	if(piece == 7)					//  S
	{								// SS
		c1[x + 0][y + 0];			// S
		c2[x - 1][y + 1];
		c3[x + 0][y + 1];
		c4[x - 1][y + 2];
	}
	if(piece == 8)					// LLL
	{								// L
		c1[x + 0][y + 0];
		c2[x + 1][y + 0];
		c3[x + 2][y + 0]
		c4[x + 0][y + 1];
	}
	if(piece == 9)					// LLL
	{								//   L
		c1[x + 0][y + 0];
		c2[x + 1][y + 0];
		c3[x + 2][y + 3];
		c4[x + 0][y + 1];
	}
	else
		ref_nbr4(int piece);
}

void	ref_nbr2(int piece)
{
	if(piece == 4)					//  SS
	{								// SS
		c1[x + 0][y + 0];
		c2[x + 1][y + 0];
		c3[x - 1][y + 1];
		c4[x + 0][y + 1];
	}
	if(piece == 5)					// SS
	{								//  SS
		c1[x + 0][y + 0];
		c2[x + 1][y + 0];
		c3[x + 1][y + 1];
		c4[x + 2][y + 1];
	}
	if(piece == 6)					// S
	{								// SS
		c1[x + 0][y + 0];			//	S
		c2[x + 0][y + 1];
		c3[x + 1][y + 1];
		c4[x + 1][y + 2];
	}
	else
		ref_nbr3(int piece);
}

void	ref_nbr(int piece)
{
	if(piece == 1)					// B
	{								// B
		c1[x + 0][y + 0];			// B
		c2[x + 0][y + 1];			// B
		c3[x + 0][y + 2];
		c4[x + 0][y + 3];
	}
	if(piece == 2)					// BBBB
	{
		c1[x + 0][y + 0];
		c2[x + 1][y + 0];
		c3[x + 2][y + 0];
		c4[x + 3][y + 0];
	}
	if(piece == 3)					// CC
	{								// CC
		c1[x + 0][y + 0];
		c2[x + 0][y + 1];
		c3[x + 1][y + 0];
		c4[x + 1][y + 1];
	}
	else
		ref_nbr2(int piece);
}
