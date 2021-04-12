/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 11:44:16 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/07 23:22:56 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int						ft_strlen(char *str)
{
	int		idx;

	idx = 0;
	while (str[idx] != '\0')
		++idx;
	return (idx);
}

char					*ft_strdup(char *str)
{
	int		len;
	char	*ret;

	len = ft_strlen(str);
	ret = malloc(sizeof(char) * (len + 1));
	if (ret == 0)
		return (0);
	len = 0;
	while (str[len] != '\0')
	{
		ret[len] = str[len];
		++len;
	}
	ret[len] = '\0';
	return (ret);
}

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*ret;
	int					idx;

	ret = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (ret == 0)
		return (0);
	idx = 0;
	while (idx < ac)
	{
		ret[idx].str = av[idx];
		ret[idx].copy = ft_strdup(av[idx]);
		ret[idx].size = ft_strlen(av[idx]);
		++idx;
	}
	ret[idx].size = 0;
	ret[idx].copy = 0;
	ret[idx].str = 0;
	return (ret);
}
