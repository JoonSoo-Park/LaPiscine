/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_board.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 22:17:49 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/04 14:11:50 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./utils.h"
#include "./validate.h"

int			*g_board[4];
int			g_check[24];

int			g_pairs[24][4] = {
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
	{3, 4, 2, 1},
	{4, 1, 2, 3},
	{4, 1, 3, 2},
	{4, 2, 1, 3},
	{4, 2, 3, 1},
	{4, 3, 1, 2},
	{4, 3, 2, 1}
};

void		print_board(void)
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

int			check_line(int line)
{
	int		idx;
	int		n;

	idx = 0;
	while (idx < 24)
	{
		if (g_check[idx])
		{
			n = 0;
			while (n < 4)
			{
				if (g_pairs[idx][n] == g_pairs[line][n])
					return (0);
				++n;
			}
		}
		++idx;
	}
	return (1);
}

int			run_program(int idx, int line)
{
	if (idx >= 4)
	{
		if (validate_down() && validate_up() &&
			validate_left() && validate_right())
		{
			print_board();
			return (1);
		}
		return (0);
	}
	while (++line < 24)
	{
		if (g_check[line] || !check_line(line))
			continue;
		g_check[line] = 1;
		g_board[idx] = g_pairs[line];
		if (run_program(idx + 1, -1))
			return (1);
		g_check[line] = 0;
	}
	return (0);
}

int			make_board(int start)
{
	return (run_program(start, -1));
}
