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

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char		*ptr;
	unsigned char	uc;

	uc = (unsigned char)c;
	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == uc)
			return (ptr);
		ptr++;
	}
	if (uc == '\0')
		return (ptr);
	return (NULL);
}
