/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 19:54:57 by ubuntu            #+#    #+#             */
/*   Updated: 2021/03/25 21:53:09 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_arr[9];

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		print(int n)
{
	int		idx;

	n--;
	idx = n;
	while (n >= 0)
	{
		ft_putchar(48 + g_arr[n]);
		n--;
	}
	while (idx >= 0)
	{
		if (g_arr[idx] != 9 - idx)
		{
			return (1);
		}
		--idx;
	}
	return (0);
}

void	func(int idx, int cur, int n)
{
	int		t;

	t = cur;
	while (t <= 9 - idx)
	{
		g_arr[idx] = t;
		if (idx > 0)
		{
			func(idx - 1, t + 1, n);
		}
		else
		{
			if (print(n))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		t++;
	}
}

void	ft_print_combn(int n)
{
	func(n - 1, 0, n);
}
