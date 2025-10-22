/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:39:24 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/21 13:03:45 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

/*int	main(void)
{
	char buffer[10];
	size_t ret;

	ret = ft_strlcpy(buffer, "abc", sizeof(buffer));
	printf("Copied: '%s', returned: %zu\n", buffer, ret);

	ret = ft_strlcpy(buffer, "Hello, world!", sizeof(buffer));
	printf("Copied: '%s', returned: %zu\n", buffer, ret);

	ret = ft_strlcpy(buffer, "", sizeof(buffer));
	printf("Copied: '%s', returned: %zu\n", buffer, ret);

	ret = ft_strlcpy(buffer, "abc", 0);
	printf("Copied: '%s', returned: %zu\n", buffer, ret);

	ret = ft_strlcpy(buffer, "123456789", sizeof(buffer));
	printf("Copied: '%s', returned: %zu\n", buffer, ret);

	return (0);
}*/
