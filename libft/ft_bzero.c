/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:36:38 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/13 11:52:42 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
//#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}
}

/*int	main(void)
{
	char s[15] = "Hello world";
	
	ft_bzero(s, 4 * sizeof(char));

	for (int i = 0; i < 12; i++)
	{
		if (s[i] == '\0')
			printf("\\0");
		else
			printf("%c", s[i]);
	}
	printf("\n");
}*/
