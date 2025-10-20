/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:52:44 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/20 10:25:40 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

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
