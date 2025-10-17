/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:25:31 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/15 13:34:58 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	result;
	int	signal;

	result = 0;
	signal = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13)
		|| *nptr == '+' || *nptr == '-')
		nptr++;
	if ((*(nptr - 1) == '-' || *(nptr - 1) == '+')
		&& (*(nptr - 2) == '+' || *(nptr - 2) == '-'))
		return (0);
	else if (*(nptr - 1) == '-' && (*(nptr - 2) != '+' || *(nptr - 2) != '-'))
		signal = -1;
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - 48);
		nptr++;
	}
	return (signal * result);
}

/*int main(void)
{
	printf("Expected: %i\n", atoi("   +189739234"));
	printf("Mine    : %i\n", ft_atoi("   +189739234"));
	printf("Expected: %i\n", atoi("   -1234"));
	printf("Mine    : %i\n", ft_atoi("   -1234"));
	printf("Expected: %i\n", atoi("   +-18aaa"));
	printf("Mine    : %i\n", ft_atoi("   +-18aaa"));
	printf("Expected: %i\n", atoi("   +1897gre39234"));
	printf("Mine    : %i\n", ft_atoi("   +1897gre39234"));
}*/
