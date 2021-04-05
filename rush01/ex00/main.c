/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 21:38:20 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/04 20:25:45 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./utils.h"
#include "./make_board.h"

extern int		g_args[16];
extern int		g_pairs[24][4];
extern int		*g_board[4];

int		main(int argc, char *argv[])
{
	if (argc != 2 || !is_valid_args(argv[1]))
	{
		ft_putstr("Error\n");
	}
	else
	{
		if (!make_board(0))
			ft_putstr("Error\n");
	}
}
