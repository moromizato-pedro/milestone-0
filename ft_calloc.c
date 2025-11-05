/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrohe3 <pedrohe3@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:38:04 by pedrohe3          #+#    #+#             */
/*   Updated: 2025/10/23 15:55:35 by pedrohe3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ptr;

	ptr = NULL;
	if (nmemb == 0 || size == 0 || nmemb * size > SIZE_MAX)
		return (malloc(1));
	ptr = (char *)malloc(nmemb * size);
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}
