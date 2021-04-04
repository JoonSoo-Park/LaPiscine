/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 21:38:20 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/04 09:22:23 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./utils.h"
#include <stdio.h>

extern int		g_args[16];
extern int		g_pairs[24][4];

int		make_board(int);

int		main(int argc, char *argv[])
{
	if (argc != 2 || !is_valid_args(argv[1]))
	{
		ft_putstr("Error\n");
	}
	else
	{
		make_board(0);
	}
}
