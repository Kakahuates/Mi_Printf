/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksanchez <ksanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:25:45 by kakahuate         #+#    #+#             */
/*   Updated: 2025/05/05 13:44:21 by ksanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isseparator(char c, char separator)
{
	return (c == separator || c == '\0');
}

static int	ft_countwords(const char *str, char separator)
{
	int		i;
	int		words_counter;
	int		current_is_separator;
	int		next_is_separator;

	i = 0;
	words_counter = 0;
	while (str[i] != '\0')
	{
		current_is_separator = ft_isseparator(str[i], separator);
		next_is_separator = ft_isseparator(str[i + 1], separator);
		if (!current_is_separator && next_is_separator)
			words_counter++;
		i++;
	}
	return (words_counter);
}

static char	*ft_extract_word(const char *src, char separator)
{
	int		word_length;
	char	*word;

	word_length = 0;
	while (!ft_isseparator(src[word_length], separator))
		word_length++;
	word = ft_substr(src, 0, word_length);
	return (word);
}

static void	*ft_fill_splitarr(char **str_split, const char *src, char separator)
{
	int	i_src;
	int	i_words;

	i_src = 0;
	i_words = 0;
	while (src[i_src] != '\0')
	{
		if (!ft_isseparator(src[i_src], separator))
		{
			str_split[i_words] = ft_extract_word(&src[i_src], separator);
			if (str_split[i_words] == NULL)
			{
				while (i_words-- > 0)
					free(str_split[i_words]);
				return (NULL);
			}
			while (!ft_isseparator(src[i_src], separator))
				i_src++;
			i_words++;
		}
		else
			i_src++;
	}
	return ((void *)1);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		words;

	if (s == NULL)
		return (NULL);
	words = ft_countwords(s, c);
	result = ft_calloc(words + 1, sizeof(char *));
	if (result == NULL)
		return (NULL);
	if (ft_fill_splitarr(result, s, c) == NULL)
	{
		free(result);
		return (NULL);
	}
	return (result);
}
