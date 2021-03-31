/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 03:36:24 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/01 03:38:26 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_argv(char *str)
{
	int idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		write(1, &str[idx], 1);
		++idx;
	}
}

int		main(int argc, char *argv[])
{
	int idx;

	idx = 1;
	while (idx < argc)
	{
		print_argv(argv[idx]);
		++idx;
		write(1, &"\n", 1);
	}
}
