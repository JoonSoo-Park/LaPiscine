/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 23:54:52 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/31 20:16:40 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_space(char c)
{
	return (c == ' ' || c == '\f' ||
			c == '\n' || c == '\r' ||
			c == '\t' || c == '\v');
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

int		is_in_base(char *base, char c)
{
	int	index;

	index = 0;
	while (base[index] != '\0')
	{
		if (base[index] == c)
			return (index);
		++index;
	}
	return (-1);
}

int		ft_atoi(char *str, char *base, int radix)
{
	int		ret;
	int		minus;
	int		to_add;

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
	while (*str != '\0' && (to_add = is_in_base(base, *str)) >= 0)
	{
		ret *= radix;
		ret += to_add;
		++str;
	}
	if (minus % 2 != 0)
		ret = -ret;
	return (ret);
}

int		ft_atoi_base(char *src, char *base)
{
	int		radix;
	int		nbr;

	radix = 0;
	while (base[radix] != '\0')
	{
		if (base[radix] == '+' || base[radix] == '-' ||
			is_space(base[radix]))
			return (0);
		++radix;
	}
	if (1 >= radix || is_dup(base))
		return (0);
	nbr = ft_atoi(src, base, radix);
	return (nbr);
}
