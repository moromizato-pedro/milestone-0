#include "libft.h"
#include "tests.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av)
{
	if (ac < 1)
		return (0);

	char	c;
	int		fail;
	int		arg;

	c = -1;
	fail = 0;
	arg = 2;

	printf("ac[1]: %s | BOOL: %d\n", av[1], strcmp(av[1], "isalpha"));
	// TEST ft_isalpha.c
	if (ac == 1 || (ac > 1 && !strcmp(av[1], "isalpha")))
	{
		c = 70;
		fail = 0;
		printf("\n\n================ FT_ISALPHA ================\n");
		if (ac == 3)
		{
			printf("\n");
			fail += test_isalpha(av[arg][0]);
		}
		else
		{
			while (++c >= 0)
				fail += test_isalpha(c);
		}
		if (fail == 0)
			printf("All tests passed successfully!\n");
	}

	// TEST ft_isdigit.c
	if (ac == 1 || (ac > 1 && !strcmp(av[1], "isdigit")))
	{
		c = 41;
		fail = 0;
		printf("\n\n================ FT_ISDIGIT ================\n");
		if (ac == 3)
		{
			printf("\n");
			fail += test_isdigit(av[arg][0]);
		}
		else
		{
			while (++c >= 0 && c < 75)
				fail += test_isdigit(c);
		}
		if (fail == 0)
			printf("All tests passed successfully!\n");
	}

	// TEST ft_isalnum.c
	if (ac == 1 || (ac > 1 && !strcmp(av[1], "isalnum")))
	{
		c = 39;
		fail = 0;
		printf("\n\n================ FT_ISALNUM ================\n");
		if (ac == 3)
		{
			printf("\n");
			fail += test_isalnum(av[arg][0]);
		}
		else
		{
			while (++c >= 0 && c < 127)
				fail += test_isalnum(c);
		}
		if (fail == 0)
			printf("All tests passed successfully!\n");
	}

	// TEST ft_isascii.c
	if (ac == 1 || (ac > 1 && !strcmp(av[1], "isascii")))
	{
		c = -1;
		fail = 0;
		printf("\n\n================ FT_ISASCII ================\n");
		if (ac == 3)
		{
			printf("\n");
			fail += test_isascii(av[arg][0]);
		}
		else
		{
			while (++c >= 0)
				fail += test_isascii(c);
		}
		if (fail == 0)
			printf("All tests passed successfully!\n");

	}

	// TEST ft_isprint.c
	if (ac == 1 || (ac > 1 && !strcmp(av[1], "isprint")))
	{
		c = -1;
		fail = 0;
		printf("\n\n================ FT_ISPRINT ================\n");
		fail += test_isprint(127);
		if (ac == 3)
		{
			printf("\n");
			fail += test_isprint(av[arg][0]);
		}
		else
		{
			while (++c >= 0 && c < 50)
				fail += test_isprint(c);
		}
		if (fail == 0)
			printf("All tests passed successfully!\n");
	}

	// TEST ft_strlen.c
	if (ac == 1 || (ac > 1 && !strcmp(av[1], "strlen")))
	{
		fail = 0;
		arg = 2;
		printf("\n\n================ FT_STRLEN ================\n");
		if (ac == 3)
		{
			printf("\n");
			fail += test_strlen(av[arg]);
		}
		else
		{
			fail += test_strlen("");
			fail += test_strlen("Hello");
			fail += test_strlen(" Hello World ");
			fail += test_strlen("H");
			fail += test_strlen("Hel\0lo\0");
		}
		if (fail == 0)
			printf("All tests passed successfully!\n");
	}
/*
	// TEST ft_memset.c
	if (ac == 1 || (ac > 1 && !strcmp(av[1], "memset")))
	{
		fail = 0;
		arg = 2;
		printf("\n\n================ FT_MEMSET ================\n");
		if (ac == 3)
		{
			printf("\n");
			fail += test_memset(av[arg]);
		}
		else
		{
			fail += test_memset('a');
		}
		if (fail == 0)
			printf("All tests passed successfully!\n");
	}
*/
//bzero	7

//memcpy	8

//memmove	9

	// TEST ft_strlcpy.c
	if (ac == 1 || (ac > 1 && !strcmp(av[1], "strlcpy")))
	{
		char	buff1[20] = "";
		fail = 0;
		arg = 2;
		printf("\n\n================ FT_STRLCPY ================\n");
		if (ac == 3)
		{
			printf("\n");
			fail += test_strlcpy(buff1, av[arg], atoi(av[arg + 1]));
		}
		else
		{
			fail += test_strlcpy(buff1, "Hello", 20);
			char	buff2[6] = "";
			fail += test_strlcpy(buff2, "Hello", 6);
			char	buff3[5] = "";
			fail += test_strlcpy(buff3, "Hello", 5);
			char	buff4[5] = "";
			fail += test_strlcpy(buff4, "Hell", 5);
		}
		if (fail == 0)
			printf("All tests passed successfully!\n");
	}

	// TEST ft_strlcat.c
	if (ac == 1 || (ac > 1 && !strcmp(av[1], "strlcat")))
	{
		char	buff1[30] = "";
		ft_memset(buff1, 0, 30);
		fail = 0;
		arg = 2;
		printf("\n\n================ FT_STRLCAT ================\n");
		if (ac == 3)
		{
			printf("\n");
			fail += test_strlcat(buff1, av[arg], atoi(av[arg + 1]));
		}
		else
		{
			fail += test_strlcat(buff1, "123", 0);
			char	buff3[15] = "";
			ft_memset(buff3, 0, 15);
			ft_memset(buff3, 'r', 6);
			buff3[0] = '\0';
			buff3[11] = 'a';
			fail += test_strlcat(buff3, "lorem ipsum", 15);
			char	buff4[5] = "";
			fail += test_strlcat(buff4, "Hell", 5);
		}
		if (fail == 0)
			printf("All tests passed successfully!\n");
	}

	// TEST ft_toupper.c
	if (ac == 1 || (ac > 1 && !strcmp(av[1], "toupper")))
	{
		c = 90;
		fail = 0;
		printf("\n\n================ FT_TOUPPER ================\n");
		fail += test_toupper(127);
		if (ac == 3)
		{
			printf("\n");
			fail += test_toupper(av[arg][0]);
		}
		else
		{
			while (++c >= 0 && c < 127)
				fail += test_toupper(c);
		}
		if (fail == 0)
			printf("All tests passed successfully!\n");
	}

	// TEST ft_tolower.c
	if (ac == 1 || (ac > 1 && !strcmp(av[1], "tolower")))
	{
		c = 60;
		fail = 0;
		printf("\n\n================ FT_TOLOWER ================\n");
		while (++c >= 0 && c < 95)
			fail += test_tolower(c);
		fail += test_tolower(127);
		if (ac == 3)
		{
			printf("\n");
			fail += test_tolower(av[arg][0]);
		}
		else
		{
			while (++c >= 0 && c < 95)
				fail += test_tolower(c);
		}
		if (fail == 0)
			printf("All tests passed successfully!\n");
	}

	// TEST ft_strchr.c
	if (ac == 1 || (ac > 1 && !strcmp(av[1], "strchr")))
	{
		fail = 0;
		arg = 2;
		printf("\n\n================ FT_STRCHR ================\n");
		if (ac == 4)
		{
			printf("\n");
			fail += test_strchr(av[arg], av[arg+1][0]);
		}
		else
		{
			fail += test_strchr("Hello", 'H');
			fail += test_strchr("Hello", 'l');
			fail += test_strchr("Hello", 'o');
			fail += test_strchr("Hello", 'a');
			fail += test_strchr("Hello", 0);
			fail += test_strchr("", 'a');
			fail += test_strchr("", 0);
			fail += test_strchr("Hel", 0);
			fail += test_strchr("Hel\0lo\0", 'o');
		}
		if (fail == 0)
			printf("All tests passed successfully!\n");
	}

	// TEST ft_strrchr.c
	if (ac == 1 || (ac > 1 && !strcmp(av[1], "strrchr")))
	{
		fail = 0;
		arg = 2;
		printf("\n\n================ FT_STRRCHR ================\n");
		if (ac == 4)
		{
			printf("\n");
			fail += test_strrchr(av[arg], av[arg+1][0]);
		}
		else
		{
			fail += test_strrchr("Hello World", 'H');
			fail += test_strrchr("Hello World", 'l');
			fail += test_strrchr("Hello World", 'd');
			fail += test_strrchr("Hello World", 'a');
			fail += test_strrchr("Hello World", 0);
			fail += test_strrchr("", 'a');
			fail += test_strrchr("", 0);
			fail += test_strrchr("Hel", 0);
			fail += test_strrchr("Hel\0lo\0", 'o');
			fail += test_strrchr("tripouille", 't' + 256);
		}
		if (fail == 0)
			printf("All tests passed successfully!\n");
	}

	// TEST ft_strncmp.c
	if (ac == 1 || (ac > 1 && !strcmp(av[1], "strncmp")))
	{
		fail = 0;
		arg = 2;
		printf("\n\n================ FT_STRNCMP ================\n");
		if (ac == 5)
		{
			printf("\n");
			fail += test_strncmp(av[arg], av[arg+1], atoi(av[arg+2]));
		}
		else
		{
			fail += test_strncmp("Hello", "Hello", 5);
			fail += test_strncmp("Hello", "Hello", 0);
			fail += test_strncmp("Hello", "Hel", 5);
			fail += test_strncmp("Hel", "Hello", 5);
			fail += test_strncmp("llo", "Hello", 5);
			fail += test_strncmp("Hello", "Hello", 3);
			fail += test_strncmp("Hello", "Hemlo", 3);
			fail += test_strncmp("Hell\0o\0", "Hello", 5);
			fail += test_strncmp("Hello", "Hell\0o\0", 5);
			fail += test_strncmp("", "Hel\0lo\0", 5);
			fail += test_strncmp("Hello", "", 5);
			fail += test_strncmp("abcdef", "abc\375xx", 5);
		}
		if (fail == 0)
			printf("All tests passed successfully!\n");
	}

//memchr	17

//memcmp	18

	// TEST ft_strnstr.c
	if (ac == 1 || (ac > 1 && !strcmp(av[1], "strnstr")))
	{
		fail = 0;
		arg = 2;
		printf("\n\n================ FT_STRNSTR ================\n");
		if (ac == 5)
		{
			printf("\n");
			fail += test_strnstr(av[arg], av[arg+1], atoi(av[arg+2]));
		}
		else
		{
			fail += test_strnstr("Hello", "", 10);
			fail += test_strnstr("Hello", "Hello", 0);
			fail += test_strnstr("Hello", "Hel", 5);
			fail += test_strnstr("Hello", "ello", 5);
			fail += test_strnstr("Hello", "ello", 3);
			fail += test_strnstr("Hel\0lo\0", "ello", 6);
			fail += test_strnstr("Hello", "World", 3);
			fail += test_strnstr("Hel", "Hello", 3);
		}
		if (fail == 0)
			printf("All tests passed successfully!\n");
	}

	// TEST ft_atoi.c
	if (ac == 1 || (ac > 1 && !strcmp(av[1], "atoi")))
	{
		fail = 0;
		arg = 2;
		printf("\n\n================ FT_ATOI ================\n");
		if (ac == 3)
		{
			printf("\n");
			fail += test_atoi(av[arg]);
		}
		else
		{
			fail += test_atoi("-2147483648");
			fail += test_atoi("2147483647");
			fail += test_atoi("0");
			fail += test_atoi("  +12345");
			fail += test_atoi("  +123a4");
			fail += test_atoi("ab123sa");
			fail += test_atoi("\f \n \r \t \v -15");
		}
		if (fail == 0)
			printf("All tests passed successfully!\n");
	}

//calloc	21

//strdup	22

	// TEST ft_strjoin
	if (ac == 1 || (ac > 1 && !strcmp(av[1], "strjoin")))
	{
		char	*res;
	
		res = 0;
		printf("\n\n================ FT_STRJOIN ================\n");
		if (ac == 4)
		{
			res = ft_strjoin(av[2], av[3]);
			printf("(s1, s2): (%s, %s) | res: %s\n", av[2], av[3], res);
			free(res);
			res = 0;
		}
	}

	if (ac == 1 || (ac > 1 && !strcmp(av[1], "substr")))
	{
		char	*res;
	
		res = 0;
		printf("\n\n================ FT_SUBSTR ================\n");
		if (ac == 5)
		{
			res = ft_substr(av[2], atoi(av[3]), atoi(av[4]));
			printf("(s, start, len): (%s, %u, %d) | res: %s\n", av[2], atoi(av[3]), atoi(av[4]), res);
			free(res);
			res = 0;
		}
	}

	return (0);
}
