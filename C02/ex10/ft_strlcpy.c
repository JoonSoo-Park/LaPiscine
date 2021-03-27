/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 22:51:29 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/27 23:41:22 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int index;

	index = 0;
	while (index < (size - 1) && src[index] != '\0')
	{
		dest[index] = src[index];
		++index;
	}
	dest[index] = '\0';
	return (index);
}
