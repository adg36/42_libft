/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:34:45 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/10 15:37:27 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>

int ft_tolower(int c)
{
    if (c >= 65 && c <= 90)
        c += 32;
    return (c);
}

/*int   main(void)
{
    printf("Expected: %i\n", tolower(90));
    printf("Mine    : %i\n", ft_tolower(90));
    printf("Expected: %i\n", tolower(3));
    printf("Mine    : %i\n", ft_tolower(3));
}*/
