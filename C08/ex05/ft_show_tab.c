/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 13:58:23 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/10 10:03:48 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void					ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		++str;
	}
	write(1, "\n", 1);
}

void					ft_putnum(int num)
{
	char	c;

	if (num > 9)
	{
		ft_putnum(num / 10);
	}
	c = num % 10 + '0';
	write(1, &c, 1);
}

void					ft_show_tab(struct s_stock_str *par)
{
	int		idx;
	int		size;

	idx = 0;
	while (par[idx].str != 0)
	{
		size = par[idx].size;
		ft_putstr(par[idx].str);
		ft_putnum(par[idx].size);
		write(1, "\n", 1);
		ft_putstr(par[idx].copy);
		++idx;
	}
}
