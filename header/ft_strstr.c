/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 19:52:59 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/28 19:54:36 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				compare(char *x, char *y)
{
	while (*x && *y)
	{
		if (*x != *y)
			return (0);
		++x;
		++y;
	}
	return (*y == '\0');
}

char			*ft_strstr(char *src, char *to_find)
{
	while (*src)
	{
		if ((*src == *to_find) && compare(src, to_find))
			return (src);
		++src;
	}
	return (0);
}
