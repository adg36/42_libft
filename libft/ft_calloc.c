/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:37:40 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/15 16:40:47 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	unsigned char	*arr;
	unsigned int	i;

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

/*int	main(void)
{
	int *a = calloc(5, sizeof(int));
	int *b = ft_calloc(5, sizeof(int));

	for (int i = 0; i < 5; i++)
	{
		a[i] = 5 - i;
		b[i] = 5 - i;
	}

	for (int i = 0; i < 5; i++)
	{
		printf("Expected: a[%d] = %d\n", i, a[i]);
		printf("Mine    : b[%d] = %d\n", i, b[i]);
	}
	printf("\n");
}*/
