/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:25:58 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/20 14:12:58 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_s;
	int		i;

	new_s = malloc(ft_strlen(s) + 1);
	if (!new_s)
		return (NULL);
	new_s = s;
	while (new_s[i])
	{
		f(i, new_s[i]);
		i++;
	}
	return (new_s);
}
