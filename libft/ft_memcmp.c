/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:19:35 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/15 12:06:47 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	if (n == 0)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (*str1 && *str1 == *str2 && n > 0)
	{
		str1++;
		str2++;
		n--;
	}
	return (*str1 - *str2);
}

/*int	main(void)
{
	char *string1 = "Hello";
	
	printf("Mine    : %i\n", ft_memcmp(string1+2, string1, 2 * sizeof(char)));
	printf("Expected: %i\n", memcmp(string1+2, string1, 2 * sizeof(char)));
}*/
