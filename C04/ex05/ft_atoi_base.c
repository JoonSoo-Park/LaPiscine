/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 23:54:52 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/31 00:53:58 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_space(char c)
{
	return (c == ' ' || c == '\f' ||
			c == '\n' || c == '\r' ||
			c == '\t' || c == '\v');
}

int		is_in_base(char *base, char c)
{
	unsigned int	index;

	index = 0;
	while (base[index] != '\0')
	{
		if (base[index] == c)
			return (1);
		++index;
	}
	return (0);
}

int		ft_atoi(char *str, char *base, int radix)
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
	while (*str != '\0' && is_in_base(base, *str))
	{
		ret *= radix;
		ret += *str - '0';
		++str
	}
	if (minus % 2 != 0)
		ret = -ret;
	return (ret);
}

int		is_dup(char *src)
{
	unsigned int	cur;
	unsigned int	to_check;

	cur = 0;
	while (src[cur] != '\0')
	{
		to_check = cur + 1;
		while (src[to_check] != '\0')
		{
			if (src[cur] == src[to_check])
				return (1);
			++to_check;
		}
		++cur;
	}
	return (0);
}

int		ft_atoi_base(char *src, char *base)
{
	int		radix;
	int		nbr;

	radix = 0;
	while (base[radix] != '\0)
		++radix;
	if (1 >= radix || is_dup(src))
		return (0);
	nbr = ft_atoi(src);
	
}
