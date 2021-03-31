/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 03:43:30 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/01 04:22:29 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int idx;

	idx = 0;
	while (s1[idx] != '\0' && s1[idx] == s2[idx])
	{
		++idx;
	}
	return (s1[idx] - s2[idx]);
}

void	ft_print_param(int argc, char *argv[])
{
	int		idx_param;
	int		index;
	char	*str;

	idx_param = 1;
	while (idx_param < argc)
	{
		str = argv[idx_param];
		index = 0;
		while (str[index] != '\0')
		{
			write(1, &str[index], 1);
			++index;
		}
		++idx_param;
		write(1, &"\n", 1);
	}
}

void	ft_sort(char argc, char *argv[])
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			++j;
		}
		++i;
	}
	ft_print_param(argc, argv);
}

int		main(int argc, char *argv[])
{
	ft_sort(argc, argv);	
}
