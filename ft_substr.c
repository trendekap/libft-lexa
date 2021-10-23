/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcrius <kcrius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:35:44 by kcrius            #+#    #+#             */
/*   Updated: 2021/10/23 17:48:40 by kcrius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_sub(const char *s, size_t len)
{
	if (ft_strlen(s) < len)
		return ((size_t)ft_strlen(s));
	else
		return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		sub = (char *)malloc(ft_strlen(s + start) + 1);
	else
		sub = (char *)malloc(len * sizeof(char) + 1);
	if (!(sub))
		return (NULL);
	while (len > 0 && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
		len--;
	}
	sub[i] = '\0';
	return (sub);
}
