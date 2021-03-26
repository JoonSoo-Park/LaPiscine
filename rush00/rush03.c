/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 15:53:36 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/26 16:05:49 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_opt(int column, int row, int x, int y)
{
	if (row == 0)
	{
		if (column == 0)
			ft_putchar('A');
		else if (column == (x - 1))
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else if (row == (y - 1))
	{
		if (column == 0)
			ft_putchar('A');
		else if (column == (x - 1))
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (column == 0 || column == (x - 1))
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	func(int x, int y)
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

int		main(void)
{
	func(5, 3);
	ft_putchar('\n');
	func(5, 1);
	ft_putchar('\n');
	func(1, 1);
	ft_putchar('\n');
	func(1, 5);
	ft_putchar('\n');
	func(4, 4);
}
