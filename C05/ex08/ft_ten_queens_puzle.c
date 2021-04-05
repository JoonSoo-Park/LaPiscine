/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzle.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 03:09:00 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/05 09:48:29 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		g_buffer[10];
int		g_board[10][10];
int		g_dy[8] = {-1, 0, 1, 0, -1, -1, 1, 1};
int		g_dx[8] = {0, 1, 0, -1, -1, 1, -1, 1};
int		g_x;

void	print_board(void)
{
	int		i;
	int		j;
	char	c;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			c = g_board[i][j] + '0';
			write(1, &c, 1);
			++j;
		}
		++i;
		write(1, "\n", 1);
	}
	write(1, "\n", 1);
}

int		ft_check_diagonal(int y, int x, int idx)
{
	int		new_y;
	int		new_x;

	new_y = y;
	new_x = x;
	while (new_y >= 0 && new_x >= 0 && new_y < 10 && new_x < 10)
	{
		new_y += g_dy[idx];
		new_x += g_dx[idx];
		if (new_y >= 0 && new_x >= 0 && new_y < 10 && new_x < 10)
		{
			if (g_board[new_y][new_x] == 1)
				return (0);
		}
	}
	return (1);
}

int		ft_check(int y, int x)
{
	int		new_y;
	int		new_x;
	int		i;

	i = 0;
	while (i < 8)
	{
		if (ft_check_diagonal(y, x, i) == 0)
			return (0);
		++i;
	}
	return (1);
}

int		ft_print_buffer(void)
{
	int index;

	index = 0;
	while (index < 10)
	{
		write(1, &g_buffer[index], 1);
		++index;
	}
	write(1, "\n", 1);
	return (1);
}

int		ft_ten_queens_puzzle(void)
{
	int		count;
	int		cur_x;
	int		cur_y;

	count = 0;
	cur_x = g_x;
	cur_y = 0;
	if (cur_x > 9)
		return (ft_print_buffer());
	while (cur_y < 10)
	{
		if (ft_check(cur_y, cur_x))
		{
			g_board[cur_y][cur_x] = 1;
			g_buffer[cur_x] = cur_y + '0';
			g_x = cur_x + 1;
			count += ft_ten_queens_puzzle();
			g_board[cur_y][cur_x] = 0;
		}
		++cur_y;
	}
	return (count);
}
