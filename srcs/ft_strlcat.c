/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrohe3 <pedrohe3@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:07:13 by pedrohe3          #+#    #+#             */
/*   Updated: 2025/10/22 22:17:52 by pedrohe3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dst);
	j = -1;
	if (size <= i)
		return (size + ft_strlen(src));
	while ((i + (++j)) < size - 1)
	{
		dst[i + j] = src[j];
		if (dst[i + j] == '\0')
			return (i + j);
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
	/*
	unsigned int	dst_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dst_len;
	j = -1;
	printf("\n(dst, src, size): (\"%s\", \"%s\", %d) | i: %d | j: %d\n", 
	dst, src, size, i, j);
	if (size < i)
		return (size + j);
	while ((int)(size - dst_len) > 1 && src[++j])
	{

		dst[i + j] = src[j];
		printf("dst[%d]: %c | src[%d]: %c | free: %d\n", i, 
		dst[i], j, src[j], size - i);
		j++;
	}
	printf("dst[%d]: \\0 | src[%d]: \\0 | free: %d\n", i, k, size - i);
	dst[i] = '\0';
	return (i);*/
