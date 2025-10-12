#include <stdio.h>
#include <string.h>
#include "../libft/ft_libft.h"

void	test_strlcat(void)
{
	char src[10] = "42Porto";
	char dest1[30] = "I study at ";
	char dest2[30] = "I study at ";

	strlcat(dest1, src, 12 * sizeof(char));
	ft_strlcat(dest2, src, 12 * sizeof(char));

	printf("Testing ft_strlcat:\n");

	if (strcmp(dest1, dest2) == 0)
		printf("✅ ft_strlcat passed\n");
	else
		printf("❌ ft_strlcat failed\n");
	printf("\n\n");
}
