/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 13:46:08 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/23 16:12:09 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*ptr;

	new_list = malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	ptr = new_list;
	while (lst)
	{
		ptr->content = f(lst->content);
		if (!ptr->content)
		{
			del(lst->content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ptr->next = lst->next;
		lst = lst->next;
		ptr = ptr->next;
	}
	return (new_list);
}

/*#include <stdio.h>
void	*double_value(void *content)
{
	int *n = (int *)content;
	int *new_n = malloc(sizeof(int));
	if (!new_n)
		return (NULL);
	*new_n = (*n) * 2;
	return (new_n);
}

void	del(void *content)
{
	free(content);
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%d -> ", *(int *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list *lst = NULL;
	t_list *new_lst;
	int a = 1, b = 2, c = 3;

	ft_lstadd_back(&lst, ft_lstnew(&a));
	ft_lstadd_back(&lst, ft_lstnew(&b));
	ft_lstadd_back(&lst, ft_lstnew(&c));

	printf("Original list:\n");
	print_list(lst);

	new_lst = ft_lstmap(lst, &double_value, &del);

	printf("\nMapped list (values doubled:\n");
	print_list(new_lst);

	ft_lstclear(&new_lst, &del);
	ft_lstclear(&lst, NULL);

	return (0);
}*/
