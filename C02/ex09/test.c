/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 00:13:31 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/27 00:52:38 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			is_alpha_num(char c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else if (c >= '0' && c <= '9')
	{
		return (2);
	}
	return (0);
}

int			is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int			is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

void		check(int index, char c, char *str)
{
	if (is_alpha_num(c) == 1)
	{
		if (index == 0)
		{
			if (is_lowercase(c))
				str[index] = c - 32;
		}
		else
		{
			if (is_alpha_num(str[index - 1]) != 1 &&
				is_alpha_num(str[index - 1]) != 2)
			{
				if (is_lowercase(c))
					str[index] = c - 32;
			}
			else
			{
				if (is_uppercase(c))
					str[index] = c + 32;
			}
		}
	}
}

char		*ft_strcapitalize(char *str)
{
	int		index;
	char	c;

	index = 0;
	while (str[index] != '\0')
	{
		c = str[index];
		check(index, c, str);
		++index;
	}
	return (str);
}

int main(void)
{
	char	str[100];
	char	*t = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	int		index;

	index = 0;
	while (t[index] != '\0')
	{
		str[index] = t[index];
		++index;
	}
	str[index] = '\0';

	ft_strcapitalize(str);
	printf("%s\n", t);
	printf("%s\n", str);
}
