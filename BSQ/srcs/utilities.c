/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 14:52:54 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/11 15:23:26 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strndup(char *str, int size)
{
	int		idx;
	char	*ret;

	if((ret = malloc(sizeof(char) * (size + 1))) == 0)
		return (0);
	idx = 0;
	while (size > 0 && *str)
	{
		ret[idx++] = *str++;
		--size;
	}
	ret[idx] = '\0';
	return (ret);
}
