/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 03:39:52 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/01 03:42:40 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_param(char *str)
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

	idx = argc - 1;
	while (idx > 0)
	{
		print_param(argv[idx]);
		--idx;
		write(1, &"\n", 1);
	}
}
