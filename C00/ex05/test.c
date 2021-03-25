/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 17:06:39 by ubuntu            #+#    #+#             */
/*   Updated: 2021/03/25 21:46:39 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(char h, char t, char o)
{
	ft_putchar(h);
	ft_putchar(t);
	ft_putchar(o);
	if (h == '7' && t == '8' && o == '9')
	{
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char h;
	char t;
	char o;

	h = '0';
	while (h <= '7')
	{
		t = h + 1;
		while (t <= '8')
		{
			o = t + 1;
			while (o <= '9')
			{
				ft_print_numbers(h, t, o);
				++o;
			}
			++t;
		}
		++h;
	}
}

int		main(void)
{
	ft_print_comb();
}
