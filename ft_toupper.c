/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:28:06 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/10 15:34:25 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/*int	main(void)
{
	printf("Expected: %i\n", toupper(97));
	printf("Mine    : %i\n", ft_toupper(97));
	printf("Expected: %i\n", toupper(90));
	printf("Mine    : %i\n", ft_toupper(90));
}*/
