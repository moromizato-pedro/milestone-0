/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrohe3 <pedrohe3@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:30:17 by pedrohe3          #+#    #+#             */
/*   Updated: 2025/10/29 18:32:50 by pedro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	char	*dup;
	char	*aux;
	int	i;

	i = -1;
	res = 0;
	dup = ft_strdup(s1);
	aux = 0;
	while (set[++i])
	{
		while (ft_strchr(dup, set[i]))
		{
			aux = ft_strchr(dup, set[i]);
			ft_strlcpy(aux, aux + 1, SIZE_MAX);
		}
	}	
	return (res);
}
/*
int	main(void)
{
	char	*str = "Hello";

	ft_strtrim(str, "ol");
}*/
