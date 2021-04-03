/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 10:23:46 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/03 13:38:47 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * EXPECTED ERRORS
 * 1. argc != 2
 * 2. contains anything that is not a number.
 * 3. number out of range. only (0 <= num <= 9) possible.
 * 4. total count / 4 is not divided. ex) 16 / 5 is not possible
 * 5. number over 9. -> check character before, if not space
 */

#include <stdio.h>

void	ft_putstr(char *str);

int		**ft_args(int argc, char *argv[], int *size);

void	ft_make_board(int **args, int size);

int		main(int argc, char *argv[])
{
	int		**args;
	int		*size;

	args = ft_args(argc, argv, size);
	if (args)
	{
		ft_make_board(args, *size);
	}
	else
	{
		ft_putstr("Error\n");
	}
}
