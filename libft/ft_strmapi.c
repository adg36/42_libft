/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:25:58 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/21 15:59:49 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_s;
	int		i;

	new_s = malloc(ft_strlen(s) + 1);
	if (!new_s)
		return (NULL);
	i = 0;
	while (*s)
	{
		new_s[i] = f(i, *s);
		i++;
		s++;
	}
	return (new_s);
}

/*char	toupper_wrapper(unsigned int i, char c)
{
	(void)i;
	return (ft_toupper(c));
}

int	main(void)
{
	printf("%s\n", ft_strmapi("Hello world", toupper_wrapper));
}*/
