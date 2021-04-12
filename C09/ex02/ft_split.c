/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:51:11 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/10 10:24:22 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				is_in_charset(char *charset, char c)
{
	while (*charset != '\0')
		if (*charset++ == c)
			return (1);
	return (0);
}

int				count_strs(char *str, char *charset)
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

void			ft_strncpy(char *dest, char *src, int n)
{
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		++dest;
		++src;
		--n;
	}
	*dest = '\0';
}

char			**ft_split(char *str, char *charset)
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
			ft_strncpy(ret[idx++], cur, (str - cur));
		}
		++str;
	}
	ret[idx] = 0;
	return (ret);
}
