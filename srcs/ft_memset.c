/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrohe3 <pedrohe3@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:51:28 by pedrohe3          #+#    #+#             */
/*   Updated: 2025/10/21 14:51:28 by pedrohe3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memset(void *ptr, int x, unsigned int n)
{
	int	*aux;

	aux = ptr;
	while (n-- > 0)
	{
		*aux = x;
		*aux += 1;
	}
	return (ptr);
}
