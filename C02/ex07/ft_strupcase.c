/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 22:53:33 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/26 23:37:28 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strupcase(char *str)
{
	int		index;
	char	c;

	index = 0;
	while (str[index] != '\0')
	{
		c = str[index];
		if (c >= 'a' && c <= 'z')
		{
			str[index] = c - 32;
		}
		++index;
	}
	return (str);
}
