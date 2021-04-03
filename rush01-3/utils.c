/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 21:08:36 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/03 21:55:51 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			g_args[16];

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		++str;
	}
}

int			is_space(char c)
{
	return (c == ' ' || c == '\t' ||
			c == '\v' || c == '\f' ||
			c == '\r' || c == '\n');
}

int			is_valid_args(char *str)
{
	int		ct;

	ct = 0;
	while (*str != '\0')
	{
		while (*str != '\0' && is_space(*str))
			++str;
		if (*str != '\0')
		{
			if ('1' <= *str && *str <= '9')
			{
				if (ct == 16 || (*(str + 1) != '\0' && !is_space(*(str + 1))))
					return (0);
				g_args[ct++] = *str - '0';
			}
			else
				return (0);
			++str;
		}
	}
	return (ct == 16);
}
