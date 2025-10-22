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

size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;
	unsigned char		uc;

	uc = (unsigned char)c;
	ptr = s + ft_strlen(s);
	while (1)
	{
		if (*ptr == uc)
			return ((char *)ptr);
		if (ptr == s)
			break ;
		ptr--;
	}
	return (NULL);
}
