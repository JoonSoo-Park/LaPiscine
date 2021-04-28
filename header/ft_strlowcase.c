/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 19:44:21 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/28 19:45:05 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strlowcase(char *str)
{
	char		c;
	char		*cur;

	cur = str;
	while (*cur)
	{
		c = *cur;
		if ('A' <= c && c <= 'Z')
		{
			*cur = c + 32;
		}
		++cur;
	}
	return (str);
}
