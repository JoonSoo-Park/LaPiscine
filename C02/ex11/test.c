/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 23:51:07 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/29 09:42:47 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			is_printable(char c)
{
	if (c >= 32 && c < 127)
	{
		return (1);
	}
	return (0);
}

void		ft_putstr_non_printable(char *str)
{
	const char	*hex_look_up;
	int			index;
	char		c;

	hex_look_up = "0123456789abcdef";
	index = 0;
	while (str[index] != '\0')
	{
		c = str[index];
		if (!is_printable(c))
		{
			ft_putchar('\\');
			ft_putchar(hex_look_up[c / 16]);
			ft_putchar(hex_look_up[c % 16]);
		}
		else
		{
			ft_putchar(c);
		}
		++index;
	}
}

int		main(void)
{
	char	*str = "Coucou\ntu vas	bien ?";
	ft_putstr_non_printable(str);
	return (0);
}
