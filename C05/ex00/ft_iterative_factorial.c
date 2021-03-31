/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 00:43:07 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/01 01:03:38 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int ret;

	if (nb < 0)
		return (0);
	ret = 1;
	while (nb > 0)
	{
		ret *= nb;
		--nb;
	}
	return (ret);
}
