/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 22:51:29 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/29 17:13:29 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	count;

	count = 0;
	while (src[count] != '\0')
		++count;
	index = 0;
	while (index < (size - 1) && src[index] != '\0')
	{
		dest[index] = src[index];
		++index;
	}
	dest[index] = '\0';
	return (count);
}
