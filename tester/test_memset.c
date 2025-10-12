#include <stdio.h>
#include <string.h>
#include "../libft/ft_libft.h"

void	test_memset(void)
{
	int	passed;
	int	failed;

	typedef struct s_memset_case
	{
		char original[10];
		char fill_char;
		size_t n;
	} t_memset_case;

	t_memset_case tests[] = {
		{"abcdef", 'x', 3},
   		{"abcdef", 'y', 0},
   		{"", 'z', 0},
  		{"12345", '0', 5},
	};

	printf("Testing ft_memset:\n");

	for (int i = 0; i < 4; i++)
	{
    		char s1[10], s2[10];
    		strcpy(s1, tests[i].original);
    		strcpy(s2, tests[i].original);

    		memset(s1, tests[i].fill_char, tests[i].n);
    		ft_memset(s2, tests[i].fill_char, tests[i].n);

    		if (memcmp(s1, s2, sizeof(s1)) == 0)
		{
        		printf("✅ Test %d passed\n", i + 1);
			passed++;
		}
		else
		{
        		printf("❌ Test %d failed\n", i + 1);
			failed++;
		}
	}
	printf("\n\n");
}
