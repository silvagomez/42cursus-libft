/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 17:19:51 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/23 14:21:35 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns an array of strings obtained 
// by splitting ’s’ using the character ’c’ as a delimiter.
// The array must end with a NULL pointer.

#include "libft.h"

static size_t	ft_wrdcount(const char *s, char c)
{
	size_t	idx;
	size_t	t_words;

	idx = 0;
	t_words = 0;
	while (s[idx] != '\0' && s[idx] == c)
		idx++;
	while (s[idx] != '\0')
	{
		t_words++;
		while (s[idx] != '\0' && s[idx] != c)
			idx++;
		while (s[idx] != '\0' && s[idx] == c)
			idx++;
	}
	return (t_words);
}

static size_t	ft_wrdlen(const char *s, char c)
{
	size_t	idx;
	size_t	len;

	idx = 0;
	len = 0;
	while (s[idx] != '\0' && s[idx] != c)
	{
		idx++;
		len++;
	}
	return (len);
}

static char	**ft_free(char **words_lst)
{
	size_t	idx;

	idx = 0;
	while (words_lst[idx] != 0)
	{
		free(words_lst[idx]);
		idx++;
	}
	free(words_lst);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char			**words_lst;
	size_t			t_words;
	size_t			w_idx;
	size_t			w_len;

	if (!s)
		return (NULL);
	t_words = ft_wrdcount(s, c);
	words_lst = (char **)ft_calloc(t_words + 1, sizeof(char *));
	if (!words_lst)
		return (NULL);
	w_idx = 0;
	while (w_idx < t_words)
	{
		while (*s != '\0' && *s == c)
		s++;
		w_len = ft_wrdlen(s, c);
		words_lst[w_idx] = ft_substr(s, 0, w_len);
		if (!(words_lst[w_idx]))
			return (ft_free(words_lst));
		s = s + w_len;
		w_idx++;
	}
	words_lst[t_words] = 0;
	return (words_lst);
}
