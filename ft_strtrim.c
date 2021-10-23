/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcrius <kcrius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:35:40 by kcrius            #+#    #+#             */
/*   Updated: 2021/10/19 18:27:34 by kcrius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		size_e;
	size_t		size_s;
	char		*newstring;

	if (!s1 || !set)
		return (NULL);
	if (s1[0] == '\0')
		return (ft_strdup(""));
	size_s = ft_strlen(s1);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size_e = ft_strlen(s1);
	while (size_e && ft_strchr(set, s1[size_e]))
		size_e--;
	if (size_e == 0)
		return (ft_strdup(""));
	newstring = ft_substr((char *)s1, 0, size_e + 1);
	return (newstring);
}
