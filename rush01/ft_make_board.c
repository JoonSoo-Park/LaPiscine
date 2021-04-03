/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_board.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 13:20:54 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/03 14:24:33 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void		print_board(int **board, int size)
{
	for (int i = 0; i < size + 2; ++i) {
		for (int j = 0; j < size + 2; ++j) {
			printf("%d ", board[i][j]);
		}
		printf("\n");
	}
}

void		ft_fill_board(int **board, int **args, int size)
{
	int		i;
	int		j;
	int		a_idx;

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

void		ft_make_board(int **args, int size)
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
	print_board(board, size);
}
