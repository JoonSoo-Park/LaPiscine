/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 19:43:06 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/28 19:44:00 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strupcase(char *str)
{
	char		c;
	char		*cur;

	cur = str;
	while (*cur)
	{
		c = *cur;
		if ('a' <= c && c <= 'z')
		{
			*cur = c - 32;
		}
		++cur;
	}
	return (str);
}
