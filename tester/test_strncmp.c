#include <stdio.h>
#include <string.h>
#include "../libft/ft_libft.h"

void	test_strncmp(void)
{
	char s1[10] = "42 Porto";
	char s2[10] = "42 Porta";
	int res1;
	int res2;

	res1 = strncmp(s1, s2, 5);
	res2 = ft_strncmp(s1, s2, 5);

	if (res1 == res2)
		printf("✅ ft_strncmp passed\n");
	else
		printf("❌ ft_strncmp failed\n");
	printf("\n\n");
}
