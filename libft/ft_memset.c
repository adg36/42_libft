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
#include <stdio.h>

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

int	main(void)
{
	//char str1[7] = "42Porto";
	char str2[7] = "42Porto";
	
	//memset(str1, '.', 2*sizeof(char));
	ft_memset(str2, '.', 2*sizeof(char));
	//printf("expected: %s\n", str1);
	printf("mine    : %s\n", str2);
}
