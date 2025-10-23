/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrohe3 <pedrohe3@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:32:22 by pedrohe3          #+#    #+#             */
/*   Updated: 2025/10/22 20:25:15 by pedrohe3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

int	test_isalpha(char value);
int	test_isdigit(char value);
int	test_isalnum(char value);
int	test_isascii(char value);
int	test_isprint(char value);
int	test_strlen(const char *str);
int	test_memset(void *ptr, int x, unsigned int n);
//int	test_bzero();
//int	test_memcpy(void *ptr, int x, unsigned int n);
//int	test_memmove(void *ptr, int x, unsigned int n);
int	test_strlcpy(char *dst, const char *src, unsigned int size);
int	test_strlcat(char *dst, const char *src, unsigned int size);
int	test_toupper(char c);
int	test_tolower(char c);
int	test_strchr(char *str, int c);
int	test_strrchr(char *str, int c);
int	test_strncmp(char *s1, char *s2, unsigned int n);
//int	test_memchr(void *ptr, int x, unsigned int n);
//int	test_memcmp(void *ptr, int x, unsigned int n);
int	test_strnstr(char *s1, char *s2, unsigned int n);
int	test_atoi(const char *str);
//int	test_callo();
//int	test_strdup();

#endif
