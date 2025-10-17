/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:13:51 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/16 15:19:49 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_count_words(char const *string, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);

char	**ft_split(char const *s, char c)
{
	int		i;
	int		arr_index;
	int		word_len;
	char	**arr;

	arr = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	word_len = 0;
	arr_index = 0;
	while (s[i])
	{
		while (s[i])
		{
			if (s[i] == c)
				break ;
			word_len++;
			i++;
		}
		if (word_len > 0)
			arr[arr_index] = ft_substr(s, i - word_len, word_len);
		word_len = 0;
		while (s[i])
		{
			if (s[i] != c)
				break ;
			i++;
		}
		arr_index++;
	}
	arr[arr_index] = NULL;
	return (arr);
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	unsigned int	i;

	substring = malloc(len + 1);
	if (!substring)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substring[i] = s[start];
		i++;
		start++;
	}
	substring[i] = '\0';
	return (substring);
}

/*int	main(void)
{
	char s[] = "Hello world of crazy people";
	char **array;

	array = ft_split(s, ' ');

	for (int i = 0; i < 5; i++)
		printf("%s\n", array[i]);

	for (int i = 0; i < 5; i++)
		free(array[i]);
	free(array);

	return (0);
}*/
