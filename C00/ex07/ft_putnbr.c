/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 22:38:07 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/25 22:38:14 by joonpark         ###   ########.fr       */
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
