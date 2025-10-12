#include <stdio.h>
#include <string.h>
#include "../libft/ft_libft.h"

void	test_strncmp(void)
{
	int passed = 0;
	int failed = 0;

	typedef struct s_strncmp_case
	{
		char s1[10];
		char s2[10];
		size_t n;
	} t_strncmp_case;
	
	t_strncmp_case tests[] = {
		{"abcdef", "abcdef", 6},
		{"abcdef", "axcdef", 2},
		{"abcdef", "abxyz", 2},
		{"abcdef", "abcxyz", 2},
		{"abc", "abcdef", 5},
		{"abc", "abc", 0},
		{"", "", 2},
		{"", "abc", 3},
		{"abc", "", 3}
	};

	int NUM_TESTS = sizeof(tests) / sizeof(tests[0]);

	printf("Testing ft_strncmp:\n");

	for (int i = 0; i < NUM_TESTS; i++)
	{
		int res1;
		int res2;
		char s1[20], s2[20];
		strcpy(s1, tests[i].s1);
		strcpy(s2, tests[i].s2);
		res1 = strncmp(s1, s2, tests[i].n);
		res2 = ft_strncmp(s1, s2, tests[i].n);

		if (res1 == res2)
		{
			printf("✅ ft_strncmp passed\n");
			passed++;
		}
		else
		{
			printf("❌ ft_strncmp failed\n");
			failed++;
		}
	}
	printf("\nSummary: %d passed, %d failed\n\n\n", passed, failed);
}
