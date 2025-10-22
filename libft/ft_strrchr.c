/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:52:00 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/21 13:59:37 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	if (*ptr == '\0' && c == '\0')
		return (ptr);
	else if (*ptr == '\0' && c != '\0')
		return (NULL);
	while (*ptr)
		ptr++;
	ptr--;
	while (*ptr)
	{
		if (*ptr == c)
			return (ptr);
		ptr--;
	}
	if (c == '\0')
		return (ptr);
	return (NULL);
}

/*int	main(void)
{
	printf("Mine:     %s\n", ft_strrchr("hello", 'e'));
	printf("Expected: %s\n", strrchr("hello", 'e'));
	printf("Mine:     %s\n", ft_strrchr("banana", 'a'));
	printf("Expected: %s\n", strrchr("banana", 'a'));
	printf("Mine:     %s\n", ft_strrchr("hello", 'z'));
	printf("Expected: %s\n", strrchr("hello", 'z'));
	printf("Mine:     %s\n", ft_strrchr("hello", '\0'));
	printf("Expected: %s\n", strrchr("hello", '\0'));
	printf("Mine:     %s\n", ft_strrchr("", 'e'));
	printf("Expected: %s\n", strrchr("", 'e'));
	printf("Mine:     %s\n", ft_strrchr("", '\0'));
	printf("Expected: %s\n", strrchr("", '\0'));
}*/
