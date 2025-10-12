/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:07:38 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/10 15:20:59 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <bsd/string.h>
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dst[i] && i < size - 1)
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
		j++;
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char src[10] = "42Porto";
	char dest1[30] = "I study at ";
	char dest2[30] = "I study at ";

	strlcat(dest1, src, 12 * sizeof(char));
	ft_strlcat(dest2, src, 12 * sizeof(char));

	printf("Expected: %s\n", dest1);
	printf("Mine    : %s\n", dest2);
}*/
