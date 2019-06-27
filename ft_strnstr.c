/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndlamini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 07:49:50 by ndlamini          #+#    #+#             */
/*   Updated: 2019/06/24 11:51:13 by ndlamini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0')
	{
		j = 0;
		if (s2[j] == s1[i])
		{
			while (s2[j] == s1[i + j] && (i + ft_strlen(s2)) <= n)
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
