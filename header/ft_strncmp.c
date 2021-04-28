/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 19:48:36 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/28 19:49:01 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strcmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 && *s1 == *s2 && n > 0)
	{
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
		return (0);
	return ((unsigned int)*s1 - (unsigned int)*s2);
}
