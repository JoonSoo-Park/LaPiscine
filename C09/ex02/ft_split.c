/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:51:11 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/08 19:12:37 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			is_in_charset(char *charset, char c)
{
	while (*charset != '\0')
		if (*charset++ == c)
			return (1);
	return (0);
}

int			count_strs(char *str, char *charset)
{
	int		cnt;

	cnt = 0;
	while (*str != '\0')
	{
		while (is_in_charset(charset, *str) && *str != '\0')
			++str;
		if (!is_in_charset(charset, *str) && *str != '\0')
		{
			++cnt;
			while (!is_in_charset(charset, *str) && *str != '\0')
				++str;
		}
	}
	return (cnt);
}

char		*ft_strncpy(char *dst, char *src, int n)
{
	unsigned int	idx;

	idx = 0;
	while (*src != '\0' && idx < (unsigned int)n)
	{
		dst[idx] = src[idx];
		++idx;
	}
	while (idx < (unsigned int)n)
	{
		dst[idx] = '\0';
		++idx;
	}
	return (dst);
}

char		**ft_split(char *str, char *charset)
{
	char		**ret;
	char		*cur;
	int			idx;

	ret = (char**)malloc(sizeof(char*) * (count_strs(str, charset) + 1));
	idx = 0;
	while (*str != '\0')
	{
		if (!is_in_charset(charset, *str))
		{
			cur = str;
			while (*str != '\0' && !is_in_charset(charset, *str))
				++str;
			ret[idx] = (char*)malloc(sizeof(char) * (str - cur + 1));
			ret[idx] = ft_strncpy(ret[idx], cur, str - cur);
			++idx;
		}
		++str;
	}
	ret[idx] = 0;
	return (ret);
}
