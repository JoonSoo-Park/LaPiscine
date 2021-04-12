/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 23:14:30 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/13 02:07:55 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				is_space(char c)
{
	return (c == ' ' || c == '\n' ||
			c == '\t' || c == '\v' ||
			c == '\f' || c == '\r');
}

int				is_number(char c)
{
	return (c >= '0' && c <= '9');
}

long long		ft_atoi(char *str)
{
	int				minus;
	long long		ret;

	minus = 0;
	while (is_space(*str) && *str != '\0')
		++str;
	while (*str != '\0' && (*str == '-' || *str == '+'))
		if (*str++ == '-')
			minus++;
	ret = 0;
	while (*str != '\0')
	{
		if (is_number(*str) == 0)
			break ;
		ret *= 10;
		ret += (*str - '0');
		++str;
	}
	if (minus % 2 != 0)
		ret = -ret;
	return (ret);
}
