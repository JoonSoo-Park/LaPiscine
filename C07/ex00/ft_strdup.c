/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 16:36:07 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/05 20:56:43 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#inlcude <stdlib.h>

char	*ft_strdup(char *src)
{
	unsigned int	src_length;
	char			*ret;

	src_length = 0;
	while (src[src_length] != '\0')
		++src_length;

	ret = malloc(sizeof(char) * (src_length + 1));
	src_length = 0;
	while (src[src_length] != '\0')
	{
		ret[src_length] = src[src_length];
		++src_length;
	}
	ret[src_length] = '\0';
	return (ret);
}
