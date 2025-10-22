/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:32:20 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/21 15:13:30 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include "libft.h"

int		num_len(long n);
void	ft_reverse(char *string, int size);

char	*ft_itoa(int n)
{
	int		i;
	long	nb;
	int		len;
	int		sign;
	char	*s;

	nb = n;
	sign = n;
	len = num_len(nb);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	if (sign < 0)
		nb = -nb;
	i = 0;
	if (nb == 0)
		s[i++] = '0';
	while (nb > 0)
	{
		s[i++] = nb % 10 + '0';
		nb /= 10;
	}
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	ft_reverse(s, len);
	return (s);
}

int	num_len(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (len + 1);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

void	ft_reverse(char *string, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		temp = string[i];
		string[i] = string[j];
		string[j] = temp;
		i++;
		j--;
	}
}

/*int	main(void)
{
	printf("%s\n", ft_itoa(INT_MIN));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(1));
	printf("%s\n", ft_itoa(-1));
	printf("%s\n", ft_itoa(INT_MAX));
	printf("%s\n", ft_itoa(-42));
}*/
