/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcrius <kcrius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:34:12 by kcrius            #+#    #+#             */
/*   Updated: 2021/10/23 20:09:28 by kcrius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

static char	**ft_malloc_error(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static int	ft_num_of_words(char const *s, char c)
{
	unsigned int	i;
	unsigned int	words;

	if (!s[0])
		return (0);
	i = 0;
	words = 0;
	while (s[i] && s[i] == c)
		++i;
	while (s[i])
	{
		if (s[i] == c)
		{
			words++;
			while (s[i] == c && s[i])
				++i;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		words++;
	return (words);
}

static void	ft_get_next_str(char **next_str, int *next_str_len, char c)
{
	unsigned int	i;

	*next_str += *next_str_len;
	*next_str_len = 0;
	i = 0;
	while (**next_str && **next_str == c)
		(*next_str)++;
	while ((*next_str)[i])
	{
		if ((*next_str)[i] == c)
			return ;
		(*next_str_len)++;
		i++;
	}
}

static char	**ft_extra(char **tab, int i)
{
	tab[i] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char			**tab;
	char			*next_str;
	int				next_str_len;
	int				nb_strs;
	int				i;

	if (!s)
		return (NULL);
	nb_strs = ft_num_of_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (nb_strs + 1));
	if (!(tab))
		return (NULL);
	i = 0;
	next_str = (char *)s;
	next_str_len = 0;
	while (i < nb_strs)
	{
		ft_get_next_str(&next_str, &next_str_len, c);
		tab[i] = (char *)malloc(sizeof(char) * (next_str_len + 1));
		if (!(tab[i]))
			return (ft_malloc_error(tab));
		ft_strlcpy(tab[i], next_str, next_str_len + 1);
		i++;
	}
	return (ft_extra(tab, i));
}

// int main(void)
// {
// 	// char *str = "asd,asdf,t789,rty";
// 	// char **mas;
// 	// mas = ft_split(str, ',');
// 	// int i;
// 	// i = 0;
// 	// while (i < 4)
// 	// {
// 	// 	printf("%s\n", mas[i]);
// 	// 	i++;
// 	// }
// 	// while (i >= 0)
// 	// {
// 	// 	free(mas[i]);
// 	// 	i--;
// 	// }
// 	// free(mas);
// 	int i;
// 	i = 0;
// 	printf("i - %d", i);
// 	return(0);
// }