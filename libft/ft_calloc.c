/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:37:40 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/21 09:30:01 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nelem, size_t elsize)
{
	unsigned char	*arr;
	size_t			i;

	if (elsize != 0 && nelem > (SIZE_MAX - 1) / elsize)
		return (NULL);
	arr = malloc(nelem * elsize);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < nelem * elsize)
	{
		arr[i] = 0;
		i++;
	}
	return ((void *)arr);
}
