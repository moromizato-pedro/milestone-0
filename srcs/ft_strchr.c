/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrohe3 <pedrohe3@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:38:26 by pedrohe3          #+#    #+#             */
/*   Updated: 2025/10/22 22:19:35 by pedrohe3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	char	*ptr;
	int		idx;

	idx = -1;
	ptr = 0;
	while (str[++idx])
	{
		if (str[idx] == (char)c)
		{
			ptr = &str[idx];
			break ;
		}
	}
	if ((char)c == '\0')
		ptr = &str[idx];
	return (ptr);
}
