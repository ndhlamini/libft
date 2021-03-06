/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndlamini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 08:41:18 by ndlamini          #+#    #+#             */
/*   Updated: 2019/06/26 15:02:28 by ndlamini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;

	i = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0')
	{
		j = 0;
		if (s2[j] == s1[i])
		{
			while (s2[j] == s1[i + j])
			{
				if (s2[j + 1] == '\0')
				{
					return ((char *)s1 + i);
				}
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
