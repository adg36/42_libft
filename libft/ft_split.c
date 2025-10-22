/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:13:51 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/21 15:09:33 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		ft_count_words(char const *string, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	free_all(char **strs, int i);

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		arr_index;
	int		word_len;

	if (c == '\0')
	{
		arr = malloc(sizeof(char *));
		if (!arr)
			return (NULL);
		arr[0] = NULL;
		return (arr);
	}
	arr = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	word_len = 0;
	arr_index = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c)
			word_len++;
		else if (word_len > 0)
		{
			arr[arr_index] = ft_substr(s, i - word_len, word_len);
			if (!arr[arr_index])
				return (free_all(arr, arr_index), NULL);
			word_len = 0;
			arr_index++;
		}
		i++;
	}
	if (word_len > 0)
		arr[arr_index++] = ft_substr(s, i - word_len, word_len);
	arr[arr_index] = NULL;
	return (arr);
}

void	free_all(char **strs, int i)
{
	while (i > 0)
	{
		i--;
		free(strs[i]);
	}
	free(strs);
}

int	ft_count_words(char const *string, char c)
{
	int	count;
	int	in_word;

	in_word = 0;
	count = 0;
	while (*string)
	{
		if (*string == c)
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		string++;
	}
	return (count);
}

/*#include <stdio.h>
int	main(void)
{
	char s[] = "\0aa\0bbb";
	char **array;

	array = ft_split(s, '\0');

	for (int i = 0; i < 3; i++)
		printf("%s\n", array[i]);

	for (int i = 0; i < 3; i++)
		free(array[i]);
	free(array);

	return (0);
}*/
