/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 17:40:37 by ubuntu            #+#    #+#             */
/*   Updated: 2021/03/25 21:52:34 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		count_digit(int n)
{
	int ct;

	ct = -1;
	while (n > 0)
	{
		n /= 10;
		ct++;
	}
	return (ct);
}

int		get_num(int n)
{
	int digit;
	int ten;

	digit = count_digit(n);
	ten = 1;
	while (digit > 0)
	{
		ten *= 10;
		--digit;
	}
	return (ten);
}

void	ft_putnbr(int nb)
{
	int ten;
	int is_min;

	is_min = 0;
	if (nb == -2147483648)
	{
		nb /= 10;
		is_min = 1;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	ten = get_num(nb);
	while (nb > 0)
	{
		ft_putchar(48 + nb / ten);
		nb %= ten;
		ten /= 10;
	}
	if (is_min)
	{
		ft_putchar('8');
	}
}

int		main(void)
{
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
}
