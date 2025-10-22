/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrohe3 <pedrohe3@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:53:30 by pedrohe3          #+#    #+#             */
/*   Updated: 2025/10/22 13:38:42 by pedrohe3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int	idx;
	char	*ptr;

	idx = -1;
	ptr = 0;
	while(str[++idx])
		if(str[idx] == c)
			ptr = &str[idx];
	if (c == '\0')
		ptr = &str[idx];
	return (ptr);
}
