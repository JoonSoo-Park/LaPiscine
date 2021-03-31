/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 01:04:27 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/01 02:05:40 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		ret_value;

	if (nb < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0)
		return (0);
	ret_value = 1;
	while (power > 0)
	{
		ret_value *= nb;
		--power;
	}
	return (ret_value);
}
