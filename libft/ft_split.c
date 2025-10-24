/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:13:51 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/23 11:33:27 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count_words(char const *string, char c);
static void	free_all(char **strs, int i);
static char	**get_words(char **arr, char const *s, char c, int i);

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		arr_index;
	int		word_len;

	if (!s || *s == '\0')
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
	get_words(arr, s, c, i);
	return (arr);
}

static char	**get_words(char **arr, char const *s, char c, int i)
{
	int	word_len;
	int	arr_index;

	word_len = 0;
	arr_index = 0;
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

static void	free_all(char **strs, int i)
{
	while (i > 0)
	{
		i--;
		free(strs[i]);
	}
	free(strs);
}

static int	ft_count_words(char const *string, char c)
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
