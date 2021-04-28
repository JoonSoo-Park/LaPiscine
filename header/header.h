/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 19:12:21 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/28 19:55:24 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_rev_int_tab(int *tab, int size);
void			ft_swap(int *a, int *b);

char			*ft_strcpy(char *dest, char *src);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
char			*ft_strcat(char *dest, char *src);
char			*ft_strncat(char *dest, char *src, unsigned int n);
char			*ft_strupcase(char *str);
char			*ft_strlowcase(char *str);
char			*ft_strstr(char *src, char *to_find);

int				ft_strcmp(char *s1, char *s2);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
int				ft_is_lowercase(char c);
int				ft_is_uppercase(char c);
int				ft_str_is_alpha(char *str);
int				ft_str_is_numeric(char *str);
int				ft_str_is_lowercase(char *str);
int				ft_str_is_uppercase(char *str);
int				ft_str_is_printable(char *str);

unsigned int	ft_strlen(char *str);

#endif
