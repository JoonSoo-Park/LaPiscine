/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 16:32:06 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/30 10:55:52 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char				*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	ptr = dest;
	while (*ptr != '\0')
		++ptr;
	while (*src != '\0' && nb > 0)
	{
		*ptr = *src;
		++ptr;
		++src;
		--nb;
	}
	*ptr = '\0';
	return (dest);
}
