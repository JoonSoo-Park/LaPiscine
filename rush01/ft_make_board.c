/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_board.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 13:20:54 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/03 16:29:38 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void		ft_fill_base(int **board, int size)
{
	int		i;
	int		j;

	i = 0;
	while (i < (size + 2))
	{
		j = 0;
		while (j < (size + 2))
		{
			if (i >= 1 && i < (size + 1) && j >= 1 && j < (size + 1))
				board[i][j] = 1;
			else
				board[i][j] = 0;
			++j;
		}
		++i;
	}
}

void		ft_fill_board(int **board, int **args, int size)
{
	int		i;
	int		j;
	int		a_idx;

	ft_fill_base(board, size);
	i = 1;
	a_idx = 0;
	while (i < (size + 1))
	{
		board[0][i] = args[0][a_idx];
		board[size + 1][i] = args[1][a_idx];
		board[i][0] = args[2][a_idx];
		board[i][size + 1] = args[3][a_idx];
		++i;
		++a_idx;
	}
}

int			**ft_make_board(int **args, int size)
{
	int		i;
	int		**board;

	board = malloc(sizeof(int*) * (size + 2));
	i = 0;
	while (i < (size + 2))
	{
		board[i] = malloc(sizeof(int) * (size + 2));
		++i;
	}
	ft_fill_board(board, args, size);
	return (board);
}
