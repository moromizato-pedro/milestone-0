/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrohe3 <pedrohe3@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:39:25 by pedrohe3          #+#    #+#             */
/*   Updated: 2025/10/22 13:38:04 by pedrohe3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	unsigned int	idx;
	int				len;

	len = 0;
	while (src[len])
		len++;
	idx = -1;
	while (src[++idx] && idx < size - 1)
		dst[idx] = src[idx];
	dst[idx] = '\0';
	return (len);
}
