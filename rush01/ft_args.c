/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 10:23:46 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/03 14:31:50 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./ft_basic.h"

int		ft_count_args(char *str)
{
	int		idx;
	int		ct;

	idx = 0;
	ct = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] < '0' || str[idx] > '9')
			return (-1);
		++ct;
		if (str[idx + 1] == '\0')
			return (ct);
		else if (!ft_is_space(str[idx + 1]))
			return (-1);
		++idx;
		++idx;
	}
	return (ct);
}

int		**ft_get_args(char *argv, int size)
{
	int		i;
	int		j;
	int		**tab;

	i = 0;
	j = 0;
	tab = malloc(sizeof(int) * (size));
	while (argv[i] != '\0')
	{
		if (j % (size) == 0)
			tab[j / size] = malloc(sizeof(int) * size);
		tab[j / size][j % size] = argv[i] - '0';
		if (argv[i + 1] != '\0')
			++i;
		++j;
		++i;
	}
	return (tab);
}

int		**ft_args(int argc, char *argv[], int *size)
{
	int		nargs;
	int		**args;

	if (argc == 2)
	{
		nargs = ft_count_args(argv[1]);
		if (nargs != 16)
		{
			return (0);
		}
		else
		{
			*size = nargs / 4;
			args = ft_get_args(argv[1], *size);
			return (args);
		}
	}
	return (0);
}
