/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:55:52 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/10 14:31:00 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
		unsigned int	i;
		unsigned char	*ptr;

		i = 0;
		ptr = s;
		while (i < n)
		{
			*(unsigned char *)s = c;
			s++;
			i++;
		}
		return (ptr);
}
