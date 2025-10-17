/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:44:51 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/15 12:12:44 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*s)
	{
		if (*s == c)
		{
			ptr = (char *)s;
			return (ptr);
		}
		s++;
	}
	return (ptr);
}

/*int	main(void)
{
	char str[] = "I am @42 Porto.";

	printf("Mine:     %s\n", ft_strchr(str, '@'));
	printf("Expected: %s\n", strchr(str, '@'));	
	return 0;
}*/
