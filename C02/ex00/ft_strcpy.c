/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 18:09:58 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/26 18:25:31 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char				*ft_strcpy(char *dest, char *src)
{
	int idx;

	idx = 0;
	while (src[idx] != '\0')
	{
		dest[idx] = src[idx];
		++idx;
	}
	dest[idx] = '\0';
	return (dest);
}
