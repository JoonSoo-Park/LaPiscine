/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 19:51:21 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/28 19:52:00 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strncat(char *dest, char *src, unsigned int n)
{
	char		*cur;

	cur = dest;
	while (*cur)
		++cur;
	while (*src && n > 0)
	{
		*cur++ = *src++;
		--n;
	}
	*cur = '\0';
	return (dest);
}
