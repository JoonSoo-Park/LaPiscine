/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 14:52:54 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/13 20:39:07 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		++str;
	}
}

char		*ft_strndup(char *str, int size)
{
	int		idx;
	char	*ret;

	if ((ret = malloc(sizeof(char) * (size + 1))) == 0)
		return (0);
	idx = 0;
	while (size > 0 && *str)
	{
		ret[idx++] = *str++;
		--size;
	}
	ret[idx] = '\0';
	return (ret);
}
