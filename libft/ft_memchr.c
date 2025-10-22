/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:07:46 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/21 14:10:31 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == (char)c)
			return ((void *)str);
		str++;
	}
	return (NULL);
}

/*int	main(void)
{
	char data[] = "hello\0world";
	void *ptr;

	ptr = memchr(data, 'e', sizeof(data));
	printf("Found 'e' at offset: %ld\n", (char *)ptr - data);
	
	ptr = memchr(data, 'z', sizeof(data));
	printf("Found 'z' at offset: %ld\n", (char *)ptr - data);
	
	ptr = memchr(data, '\0', sizeof(data));
	printf("Found '\0' at offset: %ld\n", (char *)ptr - data);
	
	ptr = memchr(data, 'h', 0);
	printf("Found 'h' at offset: %ld\n", (char *)ptr - data);
	
	ptr = memchr(data, 'd', sizeof(data));
	printf("Found 'd' at offset: %ld\n", (char *)ptr - data);

	return (0);
}*/
