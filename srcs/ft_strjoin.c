
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*join;

	join = NULL;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	join = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	ft_strlcat(join, s1, len_s1 + 1);
	ft_strlcat(join, s2, len_s1 + len_s2 + 1);
	return (join);
}
