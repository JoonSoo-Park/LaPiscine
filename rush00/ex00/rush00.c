/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 15:53:36 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/27 21:26:23 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_opt(int column, int row, int x, int y)
{
	if ((row == 0 && column == 0) ||
		(row == 0 && column == (x - 1)) ||
		(row == (y - 1) && column == 0) ||
		(row == (y - 1) && column == (x - 1)))
	{
		ft_putchar('o');
	}
	else if ((row == 0 || row == (y - 1)) &&
			(column > 0 && column < (x - 1)))
	{
		ft_putchar('-');
	}
	else if ((row > 0 && row < (y - 1)) &&
			(column == 0 || column == (x - 1)))
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int row;
	int column;

	row = 0;
	while (row < y)
	{
		column = 0;
		while (column < x)
		{
			print_opt(column, row, x, y);
			++column;
		}
		++row;
		ft_putchar('\n');
	}
}
