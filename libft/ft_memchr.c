/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:07:46 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/15 12:09:01 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		if (*str == (char)c)
			return (str);
		str++;
		n--;
	}
	return (NULL);
}

/*int	main(void)
{
	char *str = "Hello";
	printf("Expected: %p\n", memchr(str, 'e', 3 * sizeof(char)));
	printf("Mine:     %p\n", ft_memchr(str, 'e', 3 * sizeof(char)));
	printf("Expected: %p\n", memchr(str, 'o', 3 * sizeof(char)));
	printf("Mine:     %p\n", ft_memchr(str, 'o', 3 * sizeof(char)));
	printf("Expected: %p\n", memchr(str, 'l', 3 * sizeof(char)));
	printf("Mine:     %p\n", ft_memchr(str, 'l', 3 * sizeof(char)));
	printf("Expected: %p\n", memchr("", 'e', 3 * sizeof(char)));
	printf("Mine:     %p\n", ft_memchr("", 'e', 3 * sizeof(char)));
}*/
