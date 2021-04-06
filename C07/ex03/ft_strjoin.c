/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 20:50:38 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/06 21:33:43 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	idx;

	idx = 0;
	while (str[idx] != '\0')
		++idx;
	return (idx);
}

char			*ft_make_str(int tot_size, int size, char **strs, char *sep)
{
	char			*ret;
	unsigned int	strs_idx;
	unsigned int	ret_idx;
	unsigned int	idx;

	ret = malloc(sizeof(char) * (tot_size + 1));
	strs_idx = 0;
	ret_idx = 0;
	while (strs_idx < (unsigned int)size)
	{
		idx = 0;
		while (strs[strs_idx][idx] != '\0')
			ret[ret_idx++] = strs[strs_idx][idx++];
		idx = 0;
		if (strs_idx < (unsigned int)(size - 1))
			while (sep[idx] != '\0')
				ret[ret_idx++] = sep[idx++];
		++strs_idx;
	}
	ret[ret_idx] = '\0';
	return (ret);
}

char			*ft_strjoin(int size, char **strs, char *sep)
{
	char			*ret;
	unsigned int	idx;
	unsigned int	tot_len;
	unsigned int	sep_len;

	if (size == 0)
		return ((char*)malloc(sizeof(char)));
	if (size < 0)
		return (0);
	idx = 0;
	tot_len = 0;
	while (idx < (unsigned int)size)
		tot_len += ft_strlen(strs[idx++]);
	sep_len = ft_strlen(sep);
	tot_len += (sep_len * (size - 1));
	ret = ft_make_str(tot_len, size, strs, sep);
	return (ret);
}
