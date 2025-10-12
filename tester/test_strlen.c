#include <stdio.h>
#include <string.h>
#include "../libft/ft_libft.h"

void	test_strlen(void)
{
	char *str[] = {"42 Porto", "cat", ""};
	int size = sizeof(str) / sizeof(str[0]);
	int passed = 0;
	int failed = 0;

	printf("Testing ft_strlen:\n");

	for (int i = 0; i < size; i++)
	{
		if (strlen(str[i]) == ft_strlen(str[i]))
		{
			printf("✅ %s passed\n", str[i]);
			passed++;
		}
		else
		{
			printf("❌ %s failed\n", str[i]);
			failed++;
		}
	}
	printf("\nSummary: %d passed, %d failed\n\n\n", passed, failed);
}
