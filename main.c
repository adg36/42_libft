#include <stdio.h>
#include <string.h>
#include "tester.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Usage: ./tester <function_name>\n");
		return (1);
	}
	if (strcmp(argv[1], "ft_isalnum") == 0)
		test_isalnum();
	else if (strcmp(argv[1], "ft_isalpha") == 0)
		test_isalpha();
	else if (strcmp(argv[1], "ft_isascii") == 0)
		test_iascii();
	else if (strcmp(argv[1], "ft_isdigit") == 0)
		test_isdigit();
	else if (strcmp(argv[1], "ft_isprint") == 0)
		test_isprint();
	else if (strcmp(argv[1], "ft_memset") == 0)
		test_memset();
	else if (strcmp(argv[1], "ft_strlcat") == 0)
		test_strlcat();
	else if (strcmp(argv[1], "ft_strlcpy") == 0)
		test_strlcpy();
	else if (strcmp(argv[1], "ft_strlen") == 0)
		test_strlen();
	else if (strcmp(argv[1], "ft_strncmp") == 0)
		test_strncmp();
	else if (strcmp(argv[1], "ft_strnstr") == 0)
		test_strnstr();
	else if (strcmp(argv[1], "ft_toupper") == 0)
		test_toupper();
	else if (strcmp(argv[1], "ft_tolower") == 0)
		test_tolower();
	else if (strcmp(argv[1], "all") == 0)
	{
		test_isalnum();
		test_isalpha();
		test_iascii();
		test_isdigit();
		test_isprint();
		test_memset();
		test_strlcat();
		test_strlcpy();
		test_strlen();
		test_strncmp();
		test_strnstr();
		test_toupper();
		test_tolower();
	}
	else
		printf("Unknown function: %s\n", argv[1]);
	return (0);
}
