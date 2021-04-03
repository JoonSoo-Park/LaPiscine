/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:30:01 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/03 17:21:44 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./ft_basic.h"

void	print_board(int **board, int size)
{
	int		i;
	int		j;
	int		val;

	i = 1;
	while (i <= size)
	{
		j = 1;
		while (j <= size)
		{
			val = board[i][j];
			ft_putchar('0' + val);
			if (j < size)
				ft_putchar(' ');
			++j;
		}
		ft_putchar('\n');
		++i;
	}
}
