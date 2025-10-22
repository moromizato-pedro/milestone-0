/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrohe3 <pedrohe3@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:54:53 by pedrohe3          #+#    #+#             */
/*   Updated: 2025/10/20 17:54:53 by pedrohe3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *s1, char *s2, unsigned int n)
{
	unsigned int	idx1;
	unsigned int	idx2;
	char			*ptr;
	int				start;

	idx1 = -1;
	idx2 = 0;
	ptr = 0;
	start = 0;
	if (s2[0] == '\0')
		return (s1);
	while (s1[++idx1] && idx1 < n)
	{
		if (s1[idx1] == s2[idx2])
		{
			if (idx2 == 0)
				start = idx1;
			idx2++;
			if (s2[idx2] == '\0')
			{
				ptr = &s1[start];
				break;
			}
		}
		else
			ptr = 0;
	}
	return (ptr);
}
