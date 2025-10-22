#include "libft.h"
#include "tests.h"

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <stdarg.h>
#include <stdlib.h>

int	test_isalpha(char c)
{
	int	copy = ft_isalpha(c);
	int	orig = isalpha(c);

	printf("%d: %c --> copy: %d | orig: %d\n", (int)c, c, copy, orig);
	if ((orig > 0 && copy > 0) || (orig == 0 && copy == 0))
		return (0);
	return (1);
}

int	test_isdigit(char c)
{
	int	copy = ft_isdigit(c);
	int	orig = isdigit(c);

	printf("%d: %c --> copy: %d | orig: %d\n", (int)c, c, copy, orig);
	if ((orig > 0 && copy > 0) || (orig == 0 && copy == 0))
		return (0);
	return (1);
}

int	test_isalnum(char c)
{
	int	copy = ft_isalnum(c);
	int	orig = isalnum(c);

	printf("%d: %c --> copy: %d | orig: %d\n", (int)c, c, copy, orig);
	if ((orig > 0 && copy > 0) || (orig == 0 && copy == 0))
		return (0);
	return (1);
}

int	test_isascii(char c)
{
	int	copy = ft_isascii(c);
	int	orig = isascii(c);
	printf("%d: %c --> copy: %d | orig: %d\n", (int)c, c, copy, orig);
	if ((orig > 0 && copy > 0) || (orig == 0 && copy == 0))
		return (0);
	return (1);
}

int	test_isprint(char c)
{
	int	copy = ft_isprint(c);
	int	orig = isprint(c);
	printf("%d: %c --> copy: %d | orig: %d\n", (int)c, c, copy, orig);
	if ((orig > 0 && copy > 0) || (orig == 0 && copy == 0))
		return (0);
	return (1);
}

int	test_strlen(const char *str)
{
	unsigned int	orig = strlen(str);
	unsigned int	copy = ft_strlen(str);

	printf("(str): (%s) --> copy: %u | orig: %u\n", str, copy, orig);
	if (orig == copy)
		return (0);
	return (1);
}

/*
int test_memset(void *ptr, int x, unsigned int n)
{
	int	orig = memset(ptr, x, n);
	int	copy = ft_memset(ptr, x, n);

	printf("(str): (%s) --> copy: %d | orig: %d\n", ptr, copy, orig);
	if (orig == copy)
		return (0);
	return (1);
}*/

//bzero

//memcpy

//memmove

int	test_strlcpy(char *dst, const char *src, unsigned int size)
{
	unsigned int	orig;
	unsigned int	copy;
	char	orig_buff[50];

	strcpy(orig_buff, dst);
	printf(">	(dst_buff | orig_buff , src): (%s | %s, %s)\n", dst, orig_buff, src); 
	orig = strlcpy(dst, src, size);
	copy = ft_strlcpy(orig_buff, src, size);
	printf("	(dst_buff | orig_buff , src): (%s | %s, %s) -->", dst, orig_buff, src); 
	printf("copy: %u | orig: %u\n", copy, orig);
	if (orig == copy)
		return (0);
	return (1);
}

//strlcat

int	test_toupper(char c)
{
	int	copy = ft_toupper(c);
	int	orig = toupper(c);
	printf("%d: %c --> copy: %c | orig: %c\n", (int)c, c, copy, orig);
	if (orig == copy)
		return (0);
	return (1);
}

int	test_tolower(char c)
{
	int	copy = ft_tolower(c);
	int	orig = tolower(c);
	printf("%d: %c --> copy: %c | orig: %c\n", (int)c, c, copy, orig);
	if (orig == copy)
		return (0);
	return (1);
}

int	test_strchr(char *str, char c)
{
	char	*orig = strchr(str, c);
	char	*copy = ft_strchr(str, c);

	printf("(str, c): (%s, %c) --> copy: %s | orig: %s\n", str, c, copy, orig);
	if (orig == copy)
		return (0);
	return (1);
}

int	test_strrchr(char *str, char c)
{
	char	*orig = strrchr(str, c);
	char	*copy = ft_strrchr(str, c);

	printf("(str, c): (%s, %c) --> copy: %s | orig: %s\n", str, c, copy, orig);
	if (orig == copy)
		return (0);
	return (1);
}

int	test_strncmp(char *s1, char *s2, unsigned int n)
{
	int	orig = strncmp(s1, s2, n);
	int	copy = ft_strncmp(s1, s2, n);

	printf("(s1, s2, n): (%s, %s, %d) --> copy: %d | orig: %d\n", s1, s2, n, copy, orig);
	if (orig == copy)
		return (0);
	return (1);
}

//memchr

//memcmp

int	test_strnstr(char *s1, char *s2, unsigned int n)
{
	char	*orig = strnstr(s1, s2, n);
	char	*copy = ft_strnstr(s1, s2, n);

	printf("(s1, s2, n): (%s, %s, %d) --> copy: %s | orig: %s\n", s1, s2, n, copy, orig);
	if (orig == copy)
		return (0);
	return (1);
}

int	test_atoi(const char *str)
{
	int	orig = atoi(str);
	int	copy = ft_atoi(str);

	printf("(str): (%s) --> copy: %d | orig: %d\n", str, copy, orig);
	if (orig == copy)
		return (0);
	return (1);
}

//calloc

//strdup
