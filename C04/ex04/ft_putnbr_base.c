/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 23:31:03 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/31 20:36:07 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			is_dup(char *base)
{
	unsigned int	cur;
	unsigned int	to_check;

	cur = 0;
	while (base[cur] != '\0')
	{
		to_check = cur + 1;
		while (base[to_check] != '\0')
		{
			if (base[cur] == base[to_check])
				return (1);
			++to_check;
		}
		++cur;
	}
	return (0);
}

void		ft_putnbr(int nb, char *base, int radix)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / radix, base, radix);
		ft_putchar(base[nb % radix]);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb, base, radix);
	}
	else
	{
		if (nb > radix - 1)
		{
			ft_putnbr(nb / radix, base, radix);
			nb %= radix;
		}
		ft_putchar(base[nb % radix]);
	}
}

void		ft_putnbr_base(int nbr, char *base)
{
	int		radix;

	radix = 0;
	while (base[radix] != '\0')
	{
		if (base[radix] == '+' || base[radix] == '-')
			return ;
		++radix;
	}
	if (1 >= radix)
		return ;
	if (is_dup(base))
		return ;
	ft_putnbr(nbr, base, radix);
}
