/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 22:36:06 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/25 22:36:19 by joonpark         ###   ########.fr       */
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
