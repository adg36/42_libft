#include <stdio.h>
#include <ctype.h>
#include "../ft_libft.h"

void	test_isalnum(void)
{
	char c[] = {'a', 'Z', '5', '@', ' '};
	int size = sizeof(c) / sizeof(c[0]);
	int passed = 0;
	int failed = 0;

	printf("Testing ft_isalnum:\n");

	for (int i = 0; i < size; i++)
	{
		if ((isalnum(c[i]) != 0) == (ft_isalnum(c[i]) != 0))
		{
			printf("✅ %c passed\n", c[i]);
			passed++;
		}
		else
		{
			printf("❌ %c failed\n", c[i]);
			failed++;
		}
	}
	printf("\nSummary: %d passed, %d failed\n", passed, failed);
}
