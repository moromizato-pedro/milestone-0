/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrohe3 <pedrohe3@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 19:31:14 by pedrohe3          #+#    #+#             */
/*   Updated: 2025/10/29 21:52:23 by pedrohe3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	is_word;
	int	words;
	int	i;

	is_word = 0;
	words = 0;
	i = -1;
	while (s[++i])
	{
		if(is_word && s[i] == c)
		{
			is_word = 0;
			words++;
		}
		else if (s[i] != c)
			is_word = 1;
	}
	if (is_word)
		words++;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	*dup;
	char	*aux;
	int	i;

	split = 0;
	dup = ft_strdup(s);
	aux = 0;
	i = 0;
	split = (char **)malloc(sizeof(char *) * ft_count_words(s, c));
	if (!split)
		return (NULL);
	while (ft_strrchr(dup, c))
	{
		aux = ft_strrchr(dup, c);
		if (ft_strlen(aux) > 1)
			split[i++] = ft_strdup(aux + 1);
		ft_strlcpy(aux, "", 1);
	}
	split[i] = ft_strdup(dup);
	free(dup);
	dup = 0;
	return (split);
}
/*
int	main(void)
{
	char	**arr;
	char	*s = " Hello World ";
	int	i;
	int	count;

	i = -1;
	count = ft_count_words(s, ' ');
	arr = ft_split(s, ' ');
	printf("\n%d words in \"%s\"\n", count, s);
	while (++i < count)
	{
		printf("len:%ld s%d: %s", ft_strlen(arr[i]), i, arr[i]);
		if (arr[i][ft_strlen(arr[i])] == '\0')
			printf("\\0\n");
		free(arr[i]);
		arr[i] = 0;
	}
	free(arr);
	arr = 0;
	return (0);
}
*/
