/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:07:38 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/23 10:00:03 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	i = 0;
	d_len = 0;
	while (d_len < size && dst[d_len])
		d_len++;
	s_len = ft_strlen(src);
	if (size <= d_len)
		return (size + s_len);
	while (src[i] && (i + d_len) < size - 1)
	{
		dst[d_len + i] = src[i];
		i++;
	}
	if (d_len < size)
		dst[d_len + i] = '\0';
	return (d_len + s_len);
}
