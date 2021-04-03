/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 21:03:53 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/03 21:15:54 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./utils.h"
#include "./args.h"
#include <stdio.h>

int		main(int argc, char *argv[])
{
	int		size;
	int		**args;

	args = ft_check_valid_args(argc, argv, &size);
	if (args)
	{
		for (int i = 0; i < size; ++i) {
			for (int j = 0; j < size; ++j) {
				printf("%d ", args[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		ft_putstr("Error\n");
	}
}
