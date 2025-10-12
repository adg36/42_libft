#include <stdio.h>
#include <string.h>
#include "../libft/ft_libft.h"

void	test_memset(void)
{
	char s1[10] = "abcdef";
	char s2[10] = "abcdef";

	printf("Testing ft_memset:\n");

	memset(s1, 'x', 3);
	ft_memset(s2, 'x', 3);

	if (strcmp(s1, s2) == 0)
		printf("✅ ft_memset passed\n");
	else
		printf("❌ ft_memset failed\n");
}
