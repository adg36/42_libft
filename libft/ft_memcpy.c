/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:01:26 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/15 12:15:14 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;

	if (!dest)
		return (NULL);
	ptr = dest;
	while (n > 0)
	{
		*ptr = *(unsigned char *)src;
		n--;
		ptr++;
		src++;
	}
	return (dest);
}

/*int	 main(void)
{
	char src[10] = "Hello";
	char dest[10] = "Goodbye";

	memcpy(dest, src, 4 * sizeof(char));

	printf("%s\n", dest);
}*/
