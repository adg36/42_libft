/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:57:18 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/16 09:28:17 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *s);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*new_string;
	unsigned int	len;
	unsigned int	i;
	unsigned int	j;

	len = ft_strlen(s1) + ft_strlen(s2);
	new_string = malloc(len + 1);
	if (!new_string)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new_string[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		new_string[i] = s2[j];
		i++;
		j++;
	}
	new_string[i] = '\0';
	return (new_string);
}
/*
int	main(void)
{
	char *string1 = "Hello ";
	char *string2 = "world!";

	printf("%s\n", ft_strjoin(string1, string2));
}*/
