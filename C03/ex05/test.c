/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 19:41:45 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/28 21:49:57 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *src)
{
	int count;

	count = 0;
	while (*src != '\0')
	{
		++src;
		++count;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	remain;
	unsigned int	dlen;
	char			*d;
	char			*s;

	remain = size;
	d = dest;
	while (remain-- > 0 && *d != '\0')
		++d;
	dlen = d - dest;
	remain = size - dlen;
	if (remain == 0)
		return (dlen + ft_strlen(src));
	s = src;
	while (*s != '\0')
	{
		if (remain > 1)
		{
			*d++ = *s;
			--remain;
		}
		++s;
	}
	*d = '\0';
	return (dlen + (s - src));
}

int		main(void)
{
	char dest1[20] = {'h', 'i', '5', 'a', 'b', 'i', 'k', '\0'};
	char src1[] = "what's your name?";
	char dest2[20] = {'h', 'i', '5', 'a', 'b', 'i', 'k', '\0'};
	char src2[] = "what's your name?";

	printf("stlcat(%s, %s) : %ld\n", dest1, src1, strlcat(dest1, src1, 19));
	printf("%s\n\n", dest1);

	printf("ft_stlcat(%s, %s) : %d\n", dest2, src2, ft_strlcat(dest2, src2, 19));
	printf("%s\n\n", dest2);
}
