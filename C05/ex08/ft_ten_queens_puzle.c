/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzle.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 03:09:00 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/01 16:47:30 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		g_buffer[10];
int		g_board[10][10];
int		g_dx[4] = {0, 1, 0, -1};
int		g_dy[4] = {-1, 0, 1, 0};
int		g_x;

int		ft_check(int y, int x)
{
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
			g_buffer[cur_x] = cur_y + '0';
			g_x = cur_x + 1;
			count += ft_ten_queens_puzzle();
		}
		++cur_y;
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	ft_ten_queens_puzzle();
}
