/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrohe3 <pedrohe3@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:27:12 by pedrohe3          #+#    #+#             */
/*   Updated: 2025/10/22 19:23:11 by pedrohe3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

unsigned int	ft_strlen(const char *str);
unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size);
unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size);
unsigned int	ft_atoi(const char *str);
char			*ft_strchr(char *str, int c);
char			*ft_strrchr(char *str, int c);
char			*ft_strnstr(char *s1, char *s2, unsigned int n);
void			*ft_memset(void *ptr, int x, unsigned int n);
void			*ft_memcpy(void *dest, const void *src, unsigned int count);
void			*ft_memmove(void *dest, const void *src, unsigned int n);
void			ft_bzero(void *s, unsigned int n);
int				ft_isalpha(int value);
int				ft_isdigit(int value);
int				ft_isalnum(int value);
int				ft_isascii(int value);
int				ft_isprint(int value);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
//memchr
//memcmp
//calloc
//strdup

#endif
