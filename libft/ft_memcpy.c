/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:01:26 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/23 15:09:33 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;

	if (!dest && !src)
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
