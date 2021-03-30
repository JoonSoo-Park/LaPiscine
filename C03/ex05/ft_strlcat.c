/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 19:41:45 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/30 22:48:55 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *src)
{
	int count;

	count = 0;
	while (src[count] != '\0')
		++count;
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
