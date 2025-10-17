/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:28:29 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/15 15:37:14 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dup;

	i = 0;
	while (s[i])
	{
		i++;
	}
	dup = malloc(i + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	return (dup);
}

/*int	main(void)
{
	const char *string = "42 Porto";

	printf("Expected: s is %s and dup is %s\n", string, strdup(string));
	printf("Mine    : s is %s and dup is %s\n", string, ft_strdup(string));
}*/
