/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolyxen <gpolyxen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 19:39:45 by gpolyxen          #+#    #+#             */
/*   Updated: 2021/10/23 19:41:34 by gpolyxen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		pos;
	char		*str;

	if (!s)
		return (0);
	pos = 0;
	if (ft_strlen(s) < start)
		len = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (pos < len && s[start] != '\0')
	{
		str[pos] = s[start];
		pos++;
		start++;
	}
	str[pos] = '\0';
	return (str);
}
