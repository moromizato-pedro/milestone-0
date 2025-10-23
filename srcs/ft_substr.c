/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrohe3 <pedrohe3@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:41:18 by pedrohe3          #+#    #+#             */
/*   Updated: 2025/10/23 20:44:07 by pedrohe3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		s_len;
	int		i;

	s_len = strlen(s);
	i = -1;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	printf("\ns: %s | start: %u | s_len: %d | len: %zu\n", s, start, s_len, len);
	if (sub == NULL || start > (unsigned int)s_len)
		return (NULL);
	while ((size_t)++i < len && s[start + i])
	{
		printf("sub[%d]: %c | s[%d]: %c | len: %zu\n", i, sub[i], start + i, s[i], len);
		sub[i] = s[start + i];
		printf("sub[%d]: %c | s[%d]: %c | len: %zu\n", i, sub[i], start + i, s[i], len);
	}
	printf("sub: %s | s: %s\n", sub, s);
	//sub[i] = '\0';
	return (sub);
}
