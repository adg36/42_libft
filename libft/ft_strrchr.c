/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:52:00 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/15 12:08:38 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*s)
		s++;
	s--;
	while (*s)
	{
		if (*s == c)
		{
			ptr = (char *)s;
			return (ptr);
		}
		s--;
	}
	return (ptr);
}

/*int	main(void)
{
	char str[] = "I am @42 Porto @Portugal.";

	printf("Mine:     %s\n", ft_strrchr(str, '@'));
	printf("Expected: %s\n", strrchr(str, '@'));	
	return 0;
}*/
