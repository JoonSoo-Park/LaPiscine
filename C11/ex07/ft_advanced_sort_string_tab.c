/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 01:59:50 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/13 02:05:56 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			func(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	return ((unsigned int)*s1 - (unsigned int)*s2);
}

void		ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (tab[i] != 0)
	{
		j = i + 1;
		while (tab[j] != 0)
		{
			if (cmp(tab[i], tab[j]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			++j;
		}
		++i;
	}
}
