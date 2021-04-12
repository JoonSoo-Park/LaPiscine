/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:56:09 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/12 20:59:55 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int length, int (*f)(char *))
{
	int		idx;
	int		ret;

	idx = 0;
	ret = 0;
	while (idx < length)
	{
		if (f(tab[idx]) != 0)
			ret++;
		++idx;
	}
	return (ret);
}
