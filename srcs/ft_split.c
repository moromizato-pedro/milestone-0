/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrohe3 <pedrohe3@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:51:15 by pedrohe3          #+#    #+#             */
/*   Updated: 2025/10/30 21:07:28 by pedrohe3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_split(char **split)
{
	while (*split)
	{
		free(*split);
		split++;
	}
}

static int	ft_countwords(char const *s, char c)
{
	int	is_word;
	int	words;

	words = 0;
	is_word = 0;
	while (*s)
	{
		if (!is_word && *s != c)
			is_word = 1;
		else if (is_word && *s == c)
		{
			is_word = 0;
			words++;
		}
		s++;
	}
	if (is_word)
		words++;
	return (words);
}

static int	ft_sep_strlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s)
	{
		if (*s != c)
			len++;
		else if (len > 0 && *s == c)
			break ;
		s++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	len;
	int		words;
	int		i;

	words = ft_countwords(s, c);
	split = (char **)ft_calloc(sizeof(char *), words + 1);
	if (!split)
		return (NULL);
	i = -1;
	while (++i < words)
	{
		while (*s == c)
			s++;
		len = ft_sep_strlen(s, c);
		split[i] = ft_substr(s, 0, len);
		if (!split[i])
			return (ft_free_split(split), NULL);
		s += len;
	}
	return (split);
}
/*
int	main(void)
{
	char	**arr;
	char	*str = "help!";
	char	sep = ' ';

	arr = ft_split(str, sep);
	while (*arr)
	{
		printf("arr: %s\n", *arr);
		arr++;
	}
	return (0);
}*/
