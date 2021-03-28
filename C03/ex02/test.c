/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 16:32:06 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/28 16:48:22 by joonpark         ###   ########.fr       */
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

char		*ft_strcat(char *dest, char *src)
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

int		main(void)
{
	char	str1[100] = "This is the front, ";
	char	str2[30] = "and this is back.";
	char	str3[100] = "This is the front, ";
	char	str4[30] = "and this is back.";

	printf("strcat: %s\n", strcat(str1, str2));
	printf("ft_strcat: %s\n", ft_strcat(str3, str4));
}
