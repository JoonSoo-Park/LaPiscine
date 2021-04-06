/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 21:36:24 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/06 23:06:39 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str);

int		ft_is_space(char c);

int		ft_check_base(char *str);

int		get_base_to_length(int num, int radix);

int		is_in_base(char *str, char c)
{
	int		idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] == c)
			return (idx);
		++idx;
	}
	return (-1);
}

char	*ft_convert_to(int num, char *base_to, int minus)
{
	char	*ret;
	int		radix;
	int		len;
	int		idx;

	radix = ft_strlen(base_to);
	len = get_base_to_length(num, radix);
	if (minus == -1)
		++len;
	ret = malloc(sizeof(char) * (len + 1));
	if (ret == 0)
		return (0);
	if (minus == -1)
		ret[0] = '-';
	idx = minus == -1 ? 1 : 0;
	while (idx < len)
	{
		ret[len - idx - (minus == -1 ? 0 : 1)] = base_to[num % radix];
		num /= radix;
		++idx;
	}
	ret[len] = '\0';
	return (ret);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		minus;
	int		radix;
	int		num;
	int		to_add;

	num = 0;
	minus = 1;
	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (0);
	while (ft_is_space(*nbr))
		++nbr;
	while (*nbr == '+' || *nbr == '-')
		if (*(nbr++) == '-')
			minus *= -1;
	radix = ft_strlen(base_from);
	while ((to_add = is_in_base(base_from, *nbr)) >= 0)
	{
		num *= radix;
		num += to_add;
		++nbr;
	}
	printf("Number : %d\n", num);
	return (ft_convert_to(num, base_to, minus));
}

int main()
{
	char *str;
	str = ft_convert_base("\r\n  125a1v", "0123456789abcdef", "012345678");
	printf("%s", str);
}
