/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 03:01:25 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/01 04:41:31 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int idx;

	if (nb == 0 || nb == 1)
		return (0);
	idx = 2;
	while (idx * idx <= nb)
	{
		if (nb % idx == 0)
			return (0);
		++idx;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int next_number;

	next_number = nb;
	while (!ft_is_prime(next_number))
	{
		++next_number;
	}
	return (next_number);
}
