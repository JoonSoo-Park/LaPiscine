/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:44:35 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/03 21:14:59 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./utils.h"
#include <stdlib.h>

int		ft_count_args(char *str)
{
	int		idx;
	int		ct;

	idx = 0;
	ct = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] < '0' || str [idx] > '9')
			return (-1);
		++ct;
		if (str[idx + 1] == '\0')
			return (ct);
		else if (!is_space(str[idx + 1]))
			return (-1);
		++idx;
		++idx;
	}
	return (ct);
}

int		**ft_get_args(char *str, int size)
{
	int		i;
	int		j;
	int		**args;

	i = 0;
	j = 0;
	args = malloc(sizeof(int *) * size);
	while (str[i] != '\0')
	{
		if (j % size == 0)
			args[j / size] = malloc(sizeof(int) * size);
		args[j / size][j % size] = str[i] - '0';
		if (str[i + 1] != '\0')
			++i;
		++j;
		++i;
	}
	return (args);
}

int		**ft_check_valid_args(int argc, char *argv[], int *size)
{
	int		nargs;
	int		**args;

	if (argc == 2)
	{
		nargs = ft_count_args(argv[1]);
		if (nargs != 16)
			return (0);
		else
		{
			*size = (nargs / 4);
			args = ft_get_args(argv[1], *size);
			return (args);
		}
	}
	return (0);
}
