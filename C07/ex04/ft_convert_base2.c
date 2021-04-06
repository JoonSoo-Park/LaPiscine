/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 21:36:41 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/06 22:59:34 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int idx;

	idx = 0;
	while (str[idx] != '\0')
		++idx;
	return (idx);
}

int		ft_is_space(char c)
{
	return (c == ' ' || c == '\r' ||
			c == '\n' || c == '\v' ||
			c == '\f' || c == '\t');
}

int		ft_check_base(char *str)
{
	char	*cur;
	int		idx;

	if (str == 0 || ft_strlen(str) <= 1)
		return (0);
	cur = str;
	while (*cur != '\0')
	{
		if (*cur == '+' || *cur == '-' || ft_is_space(*cur))
			return (0);
		idx = 1;
		while (*(cur + idx) != '\0')
		{
			if (*cur == *(cur + idx))
				return (0);
			++idx;
		}
		++cur;
	}
	return (1);
}

int		get_base_to_length(int num, int radix)
{
	int		len;

	len = 0;
	while (num > 0)
	{
		num /= radix;
		len++;
	}
	return (len);
}
