/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:52:00 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/23 10:01:08 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char			*ptr;
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
