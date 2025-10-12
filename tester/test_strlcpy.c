#include <stdio.h>
#include <string.h>
#include "../libft/ft_libft.h"

void	test_strlcpy(void)
{
	char src[10] = "42Porto";
	char dest1[30];
	char dest2[30];

	strlcpy(dest1, src, 7 * sizeof(char));
	ft_strlcpy(dest2, src, 7 * sizeof(char));

	printf("Testing ft_strlcpy:\n");

	if (strcmp(dest1, dest2) == 0)
		printf("✅ ft_strlcpy passed\n");
	else
		printf("❌ ft_strlcpy failed\n");
	printf("\n\n");
}
