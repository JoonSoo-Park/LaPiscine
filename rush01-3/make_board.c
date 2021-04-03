/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_board.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 22:17:49 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/03 23:02:52 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*g_board[4];
int		g_check[24];	

int		g_pairs[24][4] = {
	{1, 2, 3, 4},
	{1, 2, 4, 3},
	{1, 3, 2, 4},
	{1, 3, 4, 2},
	{1, 4, 2, 3},
	{1, 4, 3, 2},
	{2, 1, 3, 4},
	{2, 1, 4, 3},
	{2, 3, 1, 4},
	{2, 3, 4, 1},
	{2, 4, 1, 3},
	{2, 4, 3, 1},
	{3, 1, 2, 4},
	{3, 1, 4, 2},
	{3, 2, 1, 4},
	{3, 2, 4, 1},
	{3, 4, 1, 2},
	{4, 4, 2, 1},
	{4, 1, 2, 3},
	{4, 1, 3, 2},
	{4, 2, 1, 3},
	{4, 2, 3, 1},
	{4, 3, 1, 2},
	{4, 3, 2, 1},
};

void		print_board()
{
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			printf("%d ", g_board[i][j]);
		}
		printf("\n");
	}
}

int		make_board(int idx)
{
	int			line;

	if (idx >= 4)
		return (check_validate());
	line = 0;
	while (line < 24)
	{
		if (g_check[line])
			continue;
		g_check[line] = 1;
		g_board[idx] = g_pairs[line];
		make_board(idx + 1);
		g_check[line] = 0;
		++line;
	}
	return (0);
}

int		make_board(int size)
{
	int		*ptr;
	
	for (int i = 0; i < 24; ++i) 
	{
		if (g_check[i])
			continue;
		g_check[i] = 1;
		g_board[0] = g_pairs[i];
		for (int j = 0; j < 24; ++j) 
		{
			if (g_check[j])
				continue;
			g_check[j] = 1;
			g_board[1] = g_pairs[j];
			for (int m = 0; m < 24; ++m) 
			{
				if (g_check[m])
					continue;
				g_check[m] = 1;
				g_board[2] = g_pairs[m];
				for (int k = 0; k < 24; ++k) 
				{
					if (g_check[k])
						continue;
					g_check[k] = 1;
					g_board[3] = g_pairs[k];
					print_board();
					printf("\n");
					g_check[k] = 0;
				}
				g_check[m] = 0;
			}
			g_check[j] = 0;
		}
		g_check[i] = 0;
	}
}
