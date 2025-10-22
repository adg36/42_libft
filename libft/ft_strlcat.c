/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:07:38 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/21 13:50:54 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dst[i] && i < size)
		i++;
	j = 0;
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	while (src[j])
	{
		i++;
		j++;
	}
	return (i);
}

/*int   main(void)
{
    char buffer[15];
    size_t ret;

	buffer[0] = '\0';
	ret = strlcat(buffer, "Hello", sizeof(buffer));
    printf("Copied: '%s', returned: %zu\n", buffer, ret);

    ret = strlcat(buffer, "123", sizeof(buffer));
    printf("Copied: '%s', returned: %zu\n", buffer, ret);

    ret = strlcat(buffer, "ABCDEFG", 10);
    printf("Copied: '%s', returned: %zu\n", buffer, ret);

    ret = strlcat(buffer, "", sizeof(buffer));
    printf("Copied: '%s', returned: %zu\n", buffer, ret);

    ret = strlcat(buffer, "abc", 0);
    printf("Copied: '%s', returned: %zu\n", buffer, ret);
	
	buffer[0] = 'X';
	buffer[1] = '\0';
    ret = strlcat(buffer, "ABCDEFGHIJKLMN", sizeof(buffer));
    printf("Copied: '%s', returned: %zu\n", buffer, ret);

    return (0);
}*/
