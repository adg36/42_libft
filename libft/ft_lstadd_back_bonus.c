/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:49:10 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/23 11:33:14 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (*lst == NULL)
		*lst = new;
	else
	{
		temp = *lst;
		while (temp != NULL)
		{
			if (temp->next == NULL)
			{
				temp->next = new;
				break ;
			}
			temp = temp->next;
		}
	}
	new->next = NULL;
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list *list = NULL;
	t_list *n;

	for (int i = 0; i < 3; i++)
	{
		int *value = malloc(sizeof(int));
		if (!value)
			return 1;
		*value = i;

		n = malloc(sizeof(t_list));
		if (!n)
			return 1;
		n->content = value;
		n->next = NULL;
	}
	ft_lstadd_back(&list, n);
	
	for (t_list *temp = list; temp != NULL; temp = temp->next)
		printf("%i\n", *(int *)(temp->content));

	t_list *temp = list;
	while (temp)
	{
		t_list *next = temp->next;
		free(temp->content);
		free(temp);
		temp = next;
	}
	return 0;
}*/
