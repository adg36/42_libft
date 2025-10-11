/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:50:00 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/10 16:02:23 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*found;

	i = 0;
	j = 0;
	while (big[i])
	{
		found = &big[i];
		while (big[i] == little[j] && i < len && little[j] != '\0')
		{
			i++;
			j++;
		}
		if (little[j] == '\0')
			return (found);
		else if (big[i] != little[j] && little[j] != '\0')
		{
			j = 0;
			i++;
		}
	}
	return (NULL);
}

int	main(void)
{
	char myStr[] = "aaaaad";
	char *myPtr = ft_strnstr(myStr, "aad", 3);
	char *theirPtr = strnstr(myStr, "aad", 3);
	if (myPtr != NULL)
	{
		printf("Mine:    %s\n", myPtr);
	}
	if (theirPtr != NULL)
	{
		printf("Expected: %s\n", theirPtr);
	}
	return 0;
}
