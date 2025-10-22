/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:49:10 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/21 16:57:51 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	while (lst != NULL)
		lst = lst->next;
	lst->next = new;
	new->next = NULL;
}
