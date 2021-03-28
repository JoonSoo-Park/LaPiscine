/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 16:32:06 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/28 16:50:35 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlen(char *src)
{
	unsigned int	count;

	count = 0;
	while (*src != '\0')
	{
		++count;
		++src;
	}
	return (count);
}

char				*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest + ft_strlen(dest);
	while (*src != '\0')
	{
		*ptr = *src;
		++ptr;
		++src;
	}
	*ptr = '\0';
	return (dest);
}
