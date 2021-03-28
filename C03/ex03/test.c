/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 16:32:06 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/28 16:53:39 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int			ft_strlen(char	*src)
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

char		*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	ptr = dest + ft_strlen(dest);

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

int		main(void)
{
	char	str1[100] = "This is the front, ";
	char	str2[30] = "and this is back.";
	char	str3[100] = "This is the front, ";
	char	str4[30] = "and this is back.";

	printf("strncat: %s\n", strncat(str1, str2, 30));
	printf("ft_strncat: %s\n", ft_strncat(str3, str4, 30));
}
