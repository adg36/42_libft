/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:37:40 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/20 10:02:45 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	unsigned char	*arr;
	size_t			i;

	if (nelem == 0 || elsize == 0)
		return (NULL);
	arr = malloc(nelem * elsize);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < nelem)
	{
		arr[i] = 0;
		i++;
	}
	return ((void *)arr);
}
