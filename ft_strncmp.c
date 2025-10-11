/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:44:17 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/10 15:49:06 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n < 1)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char s1[7] = "42Porto";
	char s2[7] = "42Porta";

	printf("Expected: %i\n", strncmp(s1, s2, 5));
	printf("Mine    : %i\n", ft_strncmp(s1, s2, 5));
	printf("Expected: %i\n", strncmp(s1, s2, 7));
	printf("Mine    : %i\n", ft_strncmp(s1, s2, 7));
}*/
