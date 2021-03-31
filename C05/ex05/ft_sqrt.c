/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 02:25:12 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/01 02:31:09 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		index;

	if (nb < 0)
		return (0);
	index = 0;
	while (index * index <= nb)
	{
		if (index * index == nb)
			return (index);
		++index;
	}
	return (0);
}
