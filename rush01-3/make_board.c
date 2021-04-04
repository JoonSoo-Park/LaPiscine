/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_board.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 22:17:49 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/04 10:04:52 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./utils.h"

/*
 ** g_board 4*4 크기의 2차원 배열과 같다. 다른 점은 배열 포인터를 가지고 있고 이 포인터들이 다른 배열을 가리킨다.
 ** g_check는 숫자쌍 24개 중 현재 어떤게 사용중인지 체크하기 위한 용도
 ** g_lines는 각각의 라인이 몇번째 숫자쌍을 사용하고 있는지 나타낸다.
 */

int		*g_board[4];
int		g_check[24];	
int		g_lines[4];

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
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(g_board[i][j] + '0');
			if (j != 3)
				ft_putchar(' ');
			++j;
		}
		++i;
		ft_putchar('\n');
	}
	ft_putchar('\n');
}

int		check_line(int line)
{
	int		idx;

	idx = 0;
	while (idx < 4)
	{
		if ((g_lines[idx++] / 6) == (line / 6))
			return (0);
	}
	return (1);
}

int		run_program(int idx)
{
	int			line;

	if (idx >= 4)
	{
		print_board();
		// return (check_validate());
		return (0);
	}
	line = -1;
	while (++line < 24)
	{
		if (g_check[line] || !check_line(line))
			continue;
		g_check[line] = 1;
		g_lines[idx] = line;
		g_board[idx] = g_pairs[line];
		run_program(idx + 1);
		g_check[line] = 0;
		g_lines[idx] = -1;
	}
	return (0);
}

int		make_board(int start)
{
	int		idx;

	idx = 0;
	while (idx < 4)
		g_lines[idx++] = 10000;
	return (run_program(start));
}
