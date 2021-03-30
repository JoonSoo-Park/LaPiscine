/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 16:32:06 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/30 10:54:42 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char				*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	pt = dest;
	while (*ptr != '\0')
		++prt;
	while (*src != '\0')
	{
		*ptr = *src;
		++ptr;
		++src;
	}
	*ptr = '\0';
	return (dest);
}
