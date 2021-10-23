/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcrius <kcrius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:35:14 by kcrius            #+#    #+#             */
/*   Updated: 2021/10/19 18:22:01 by kcrius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*conc;
	unsigned int	i;
	unsigned int	j;

	if (!s1 || !s2)
		return (NULL);
	j = 0;
	i = ft_strlen(s1) + ft_strlen(s2);
	conc = malloc(i);
	if (!(conc))
		return (NULL);
	i = 0;
	while (s1[i])
		conc[j++] = s1[i++];
	i = 0;
	while (s2[i])
		conc[j++] = s2[i++];
	conc[j] = '\0';
	return (conc);
}
