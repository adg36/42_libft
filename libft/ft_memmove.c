/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:52:44 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/15 15:26:57 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	if (dest < src)
	{
		while (*(unsigned char *)src && i < n)
		{
			*(unsigned char *)dest = *(unsigned char *)src;
			i++;
		}
	}
	i = 0;
	if (dest > src)
	{
		while (*(unsigned char *)src && i < n)
		{
			*(unsigned char *)dest = *(unsigned char *)src;
			i++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char source[] = "Hello";

	printf("Expected: %p\n", memmove(source+2, source, sizeof(char) * 2));
	printf("Mine    : %p\n", ft_memmove(source+2, source, sizeof(char) * 2));
	return 0;
}*/
