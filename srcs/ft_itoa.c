/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrohe3 <pedrohe3@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 21:53:14 by pedrohe3          #+#    #+#             */
/*   Updated: 2025/10/30 00:31:13 by pedrohe3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_digitadd(int n, char *s, int i)
{
	char	c;
	if (n < 0)
	{
		s[0] = '-';
		c = '0' - (char)(n % 10);
	}
	else
	{
		c = '0' + (char)(n % 10);
	}
	s[i++] = c;
	s[i] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	char	*aux;
	int	i;
	int	is_neg;

	aux = ft_strdup("");
	i = 0;
	is_neg = 0;
	if (n < 0)
	{
		i++;
		is_neg = 1;
	}
	printf("--> n: %d | n/10: %d\n", n, n / 10);
	if (n / 10 != 0)
		aux = ft_itoa(n / 10);
	i += ft_strlen(aux);
	s = (char *)malloc(sizeof(char) * (i + 1 + 1));
	if (is_neg)
		s[0] = '-';
	printf("\n\n<-- n: %d\n", n);
	printf("aux: %s | malloc: %d\n", aux, i + 1 + 1);
	ft_strlcpy(s, aux, ft_strlen(aux) + 1);
	printf("(s, aux): (%s, %s)\n", s, aux);
	if (!s)
		return (NULL);
	ft_digitadd(n, s, i);
	printf("n: %d | i: %d | (s, aux): (%s, %s)\n", n, i, s, aux);
	free(aux);
	return (s);
}

#include <limits.h>

int	main(void)
{
	int	i = INT_MIN;

	printf("n: %s\n", ft_itoa(i));
	return (0);
}
