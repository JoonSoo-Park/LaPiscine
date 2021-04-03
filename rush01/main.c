/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 10:23:46 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/03 17:55:12 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_args.h"
#include "./ft_make_board.h"

void	print_board(int **, int);
int		ft_find_answer(int **, int, int, int);

int		main(int argc, char *argv[])
{
	int		**args;
	int		**board;
	int		size;

	args = ft_args(argc, argv, &size);
	if (args)
	{
		board = ft_make_board(args, size);
		ft_find_answer(board, size, 1, 1);
	}
	else
	{
		ft_putstr("Error\n");
	}
}
