/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 14:31:56 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/11 14:36:31 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			is_space(char c)
{
	return (c == ' ' || c == '\r' ||
			c == '\n' || c == '\r' ||
			c == '\t' || c == '\v');
}

int			is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int			ft_atoi(char *str)
{
	int		ret;
	int		minus;

	ret = 0;
	minus = 0;
	while (is_space(*str))
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			++minus;
		++str;
	}
	while (*str != '\0' && is_number(*str))
	{
		ret *= 10;
		ret += *str - '0';
		++str;
	}
	if (minus % 2 != 0)
		ret = -ret;
	return (ret);
}
