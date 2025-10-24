/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:28:54 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/23 15:42:35 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	in_set(char const *s, char c);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		start;
	int		end;
	int		i;

	i = 0;
	while (in_set(set, s1[i]))
		i++;
	start = i;
	i = ft_strlen(s1) - 1;
	while (i > start && in_set(set, s1[i]))
		i--;
	end = i;
	i = 0;
	trimmed = malloc(end - start + 2);
	if (!trimmed)
		return (NULL);
	while (start <= end)
	{
		trimmed[i] = s1[start];
		i++;
		start++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}

static int	in_set(char const *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}
