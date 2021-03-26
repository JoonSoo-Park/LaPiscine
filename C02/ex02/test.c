/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 18:34:24 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/26 18:44:49 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str)
{
	int		index;
	char	c;

	index = 0;
	while (str[index] != '\0')
	{
		c = str[index];
		if (!(('a' <= c && c <= 'z') ||
			('A' <= c && c <= 'Z')))
		{
			return (0);
		}
		++index;
	}
	return (1);
}

int		main(void)
{
	char *str = "ijaseoifhsaljv98723o4irhslgkhnsalrfjwae98f";
	char *str2 = "kwrehgiuvhsad;lkhnbaglkjefaoihfl;earh";
	char *str3 = "iasifhljkjzvicjlwelIiewksazdgk";

	printf("%d\n", ft_str_is_alpha(str));
	printf("%d\n", ft_str_is_alpha(str2));
	printf("%d\n", ft_str_is_alpha(str3));
}
