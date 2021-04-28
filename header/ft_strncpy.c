/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 19:25:03 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/28 19:30:42 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strncpy(char *dest, char *src, unsigned int n)
{
	while (*src && n > 0)
	{
		*dest = *src;
		++dest;
		++src;
		--n;
	}
	while (n > 0)
	{
		*dest = '\0';
		++dest;
		--n;
	}
	return (dest);
}
