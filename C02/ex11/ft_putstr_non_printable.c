/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 23:51:07 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/30 19:47:15 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			is_printable(char c)
{
	return (c >= 32 && c != 127);
}

void		ft_putstr_non_printable(char *str)
{
	const char		*hex_look_up = "0123456789abcdef";
	unsigned int	index;
	unsigned char	c;

	index = 0;
	while (str[index] != '\0')
	{
		c = str[index];
		if (is_printable(c))
		{
			ft_putchar(c);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar(hex_look_up[c / 16]);
			ft_putchar(hex_look_up[c % 16]);
		}
		++index;
	}
}
