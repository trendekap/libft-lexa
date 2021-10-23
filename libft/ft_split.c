/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolyxen <gpolyxen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 21:10:37 by gpolyxen          #+#    #+#             */
/*   Updated: 2021/10/23 21:29:32 by gpolyxen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_cleaner(char **arr)
{
	unsigned int	count;

	count = 0;
	while (arr[count])
	{
		free(arr[count]);
		count++;
	}
	free(arr);
	return (NULL);
}

static size_t	ft_count_c(const char *arr, char c)
{
	size_t	count;

	count = 0;
	while (arr[count] && arr[count] != c)
		count++;
	return (count);
}

static size_t	ft_cnt_word(const char*arr, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (arr[i])
	{
		if ((arr[i] != c && arr[i + 1] && arr[i + 1] == c)
			|| (arr[i] != c && !arr[i + 1]))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	start;
	char	**arr;

	i = 0;
	start = 0;
	if (!s)
		return (NULL);
	arr = malloc((ft_cnt_word(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (s[i++] == c)
		start++;
	i = -1;
	while (++i < ft_cnt_word(s, c))
	{
		arr[i] = ft_substr(s, start, ft_count_c(&s[start], c));
		if (!arr)
			return (ft_cleaner(arr));
		start += ft_count_c(&s[start], c);
		while (s[start] == c)
			start++;
	}
	arr[i] = NULL;
	return (arr);
}
