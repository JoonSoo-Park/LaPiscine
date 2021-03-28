/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 17:37:54 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/28 21:55:32 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		compare(char *x, char *y)
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

char	*ft_strstr(char *src, char *to_find)
{
	while (*src != '\0')
	{
		if ((*src == *to_find) && compare(src, to_find))
			return (src);
		++src;
	}
	return (NULL);
}
