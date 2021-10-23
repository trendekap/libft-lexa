/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolyxen <gpolyxen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 19:39:42 by gpolyxen          #+#    #+#             */
/*   Updated: 2021/10/23 19:41:33 by gpolyxen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	shift(char c, const char *set)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*trim;
	char	*tmp;
	char	*d;

	if (!s || !set)
		return (0);
	while (shift(*s, set))
		s++;
	trim = ft_strdup(s);
	if (trim)
	{
		tmp = trim;
		d = trim + ft_strlen(trim) - 1;
		while (shift(*d, set))
			d--;
		*++d = '\0';
		trim = ft_strdup(trim);
		free(tmp);
	}
	return (trim);
}
