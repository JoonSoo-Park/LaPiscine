/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 23:07:29 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/07 00:35:52 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_is_in_set(char *charset, char c)
{
	while (*charset != '\0')
	{
		if (*charset == c)
			return (1);
		++charset;
	}
	return (0);
}

unsigned int	ft_count_part(char *str, char *charset)
{
	unsigned int	ct;

	ct = 0;
	while (*str != '\0')
	{
		if (!ft_is_in_set(charset, *str))
		{
			++ct;
			while (*str != '\0' && !ft_is_in_set(charset, *str))
				++str;
		}
		++str;
	}
	return (ct);
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
	char			**ret;
	char			*cur;
	unsigned int	idx;

	ret = (char**)malloc(sizeof(char*) * ft_count_part(str, charset) + 1);
	idx = 0;
	while (*str != '\0')
	{
		if (!ft_is_in_set(charset, *str))
		{
			cur = str;
			while (*str != '\0' && !ft_is_in_set(charset, *str))
				++str;
			ret[idx] = (char*)malloc(sizeof(char) * (str - cur + 1));
			ft_strncpy(ret[idx++], cur, (str - cur));
		}
		++str;
	}
	ret[idx] = 0;
	return (ret);
}
