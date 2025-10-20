/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:32:20 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/20 13:52:01 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		num_len(int n);
void	ft_reverse(char *string, int size);

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	int		sign;
	char	*s;

	sign = n;
	len = num_len(n);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	if (sign < 0)
		n = -n;
	i = 0;
	while (n > 0)
	{
		s[i++] = n % 10 + '0';
		n /= 10;
	}
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	ft_reverse(s, len);
	return (s);
}

int	num_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	n = -n;
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
