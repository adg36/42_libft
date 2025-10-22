/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:28:54 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/16 11:12:44 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	in_set(char const *s, char c);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int	start_end[2];
	int	i;

	i = 0;
	while (in_set(set, s1[i]))
		i++;
	start_end[0] = i;
	while (s1[i] == '\0' || s1[i + 1])
		i++;
	while (i > start_end[0] && in_set(set, s1[i]))
		i--;
	start_end[1] = i;
	i = 0;
	trimmed = malloc(start_end[1] - start_end[0] + 2);
	if (!trimmed)
		return (NULL);
	while (start_end[0] <= start_end[1])
	{
		trimmed[i] = s1[start_end[0]];
		i++;
		start_end[0]++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}

int	in_set(char const *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}
