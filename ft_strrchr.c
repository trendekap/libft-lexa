/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcrius <kcrius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:35:38 by kcrius            #+#    #+#             */
/*   Updated: 2021/10/21 17:16:51 by kcrius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			j = i;
		i++;
	}
	if (s[i] == (char)c)
		j = i;
	if ((char)c == s[j])
		return ((char *) s + j);
	else
		return (NULL);
}
