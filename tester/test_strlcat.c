#include <stdio.h>
#include <string.h>
#include "../libft/ft_libft.h"

void	test_strlcat(void)
{
	int	passed = 0;
	int	failed = 0;

	typedef struct s_strlcat_case
	{
		char src[30];
		char dest[30];
		size_t n;
	} t_strlcat_case;
	
	t_strlcat_case tests[] = {
		{"42 Porto", "I study at ", 20},
		{"world", "Hello ", 3},
		{" there", "Hi", 3},
		{"", "Hello", 2},
		{"42 Porto", "I study at ", 0},
	};

	int NUM_TESTS = sizeof(tests) / sizeof(tests[0]);

	printf("Testing ft_strlcat:\n");

	for (int i = 0; i < NUM_TESTS; i++)
	{
		char dest1[20], dest2[20], src[20];
		strcpy(dest1, tests[i].dest);
		strcpy(dest2, tests[i].dest);
		strcpy(src, tests[i].src);
		strlcat(src, dest1, tests[i].n);
		ft_strlcat(src, dest2, tests[i].n);

		if (strcmp(dest1, dest2) == 0)
		{
			printf("✅ ft_strlcat passed\n");
			passed++;
		}
		else
		{	
			printf("❌ ft_strlcat failed\n");
			failed++;
		}
	}
	printf("\nSummary: %d passed, %d failed\n\n\n", passed, failed);
}
