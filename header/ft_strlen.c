/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 19:18:50 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/28 19:20:06 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlen(char *str)
{
	unsigned int index;

	index = 0;
	while (*str)
	{
		++index;
		++str;
	}
	return (index);
}
