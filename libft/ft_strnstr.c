/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:50:00 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/15 13:20:53 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	j = 0;
	while (big[i] && ((i + j) < len))
	{
		j = 0;
		while (big[i + j] && little[j] && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char myStr[] = "aaaad";
	char *myPtr = ft_strnstr(myStr, "aad", 4);
	char *theirPtr = strnstr(myStr, "aad", 4);
	if (theirPtr == NULL)
		printf("Expected: null\n");
	else
		printf("Expected: %s\n", theirPtr);
	if (myPtr == NULL)
		printf("Mine: null\n");
	else
		printf("Mine:    %s\n", myPtr);
	return 0;
}*/
