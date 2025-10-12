#include <stdio.h>
#include <string.h>
#include "../libft/ft_libft.h"

void	test_strlcpy(void)
{
	int	passed = 0;
	int	failed = 0;

	typedef struct s_strlcpy_case
	{
		char src[30];
		char dest[30];
		size_t n;
	} t_strlcpy_case;
	
	t_strlcpy_case tests[] = {
		{"42 Porto", "Copy here", 20},
		{"world", "", 3},
		{"", "Hi", 3},
		{"Hello", "*****", 2},
		{"42 Porto", "Copy", 0},
	};

	int NUM_TESTS = sizeof(tests) / sizeof(tests[0]);

	printf("Testing ft_strlcpy:\n");

	for (int i = 0; i < NUM_TESTS; i++)
	{
		char dest1[20], dest2[20], src[20];
		strcpy(dest1, tests[i].dest);
		strcpy(dest2, tests[i].dest);
		strcpy(src, tests[i].src);
		strlcpy(src, dest1, tests[i].n);
		ft_strlcpy(src, dest2, tests[i].n);

		if (strcmp(dest1, dest2) == 0)
		{
			printf("✅ ft_strlcpy passed\n");
			passed++;
		}
		else
		{	
			printf("❌ ft_strlcpy failed\n");
			failed++;
		}
	}
	printf("\nSummary: %d passed, %d failed\n\n\n", passed, failed);
}
