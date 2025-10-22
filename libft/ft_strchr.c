/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:44:51 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/21 15:41:45 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	if (*ptr == '\0' && c == '\0')
		return (ptr);
	else if (*ptr == '\0' && c != '\0')
		return (NULL);
	while (*ptr)
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
	}
	if (c == '\0')
		return (ptr);
	return (NULL);
}

/*int	main(void)
{
	printf("Mine:     %s\n", ft_strchr("hello", 'e'));
	printf("Expected: %s\n", strchr("hello", 'e'));
	printf("Mine:     %s\n", ft_strchr("banana", 'a'));
	printf("Expected: %s\n", strchr("banana", 'a'));
	printf("Mine:     %s\n", ft_strchr("hello", 'z'));
	printf("Expected: %s\n", strchr("hello", 'z'));
	printf("Mine:     %s\n", ft_strchr("hello", '\0'));
	printf("Expected: %s\n", strchr("hello", '\0'));
	printf("Mine:     %s\n", ft_strchr("", 'e'));
	printf("Expected: %s\n", strchr("", 'e'));
	printf("Mine:     %s\n", ft_strchr("", '\0'));
	printf("Expected: %s\n", strchr("", '\0'));
}*/
