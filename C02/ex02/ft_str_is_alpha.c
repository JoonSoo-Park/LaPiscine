/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 18:34:24 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/30 21:01:38 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	unsigned int	index;
	char			c;

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
