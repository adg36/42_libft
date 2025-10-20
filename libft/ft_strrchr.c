/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:52:00 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/20 11:00:56 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr)
		ptr++;
	ptr--;
	while (*ptr)
	{
		if (*ptr == c)
			return (ptr);
		ptr--;
	}
	if (c == '\0')
		return (ptr);
	return (NULL);
}
