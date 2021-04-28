/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 19:50:11 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/28 19:50:55 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strcat(char *dest, char *src)
{
	char		*cur;

	cur = dest;
	while (*cur)
		++cur;
	while (*src)
		*cur++ = *src++;
	*cur = '\0';
	return (dest);
}
