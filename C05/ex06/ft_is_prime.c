/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@stduent.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 02:31:51 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/01 02:58:04 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int idx;

	if (nb == 0 || nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	idx = 2;
	while (idx * idx <= nb)
	{
		if (nb % idx == 0)
			return (0);
		++idx;
	}
	return (1);
}
