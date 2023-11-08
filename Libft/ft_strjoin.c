/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarrasc <acarrasc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:14:56 by acarrasc          #+#    #+#             */
/*   Updated: 2023/10/02 10:30:15 by acarrasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*p;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	p = ft_calloc(s1len + s2len + 1, sizeof(char));
	if (!p)
		return (NULL);
	if (s1len + s2len == 0)
	{
		p[0] = '\0';
		return (p);
	}
	if (!s1)
		ft_strlcpy(p, s2, s2len + 1);
	else if (!s2)
		ft_strlcpy(p, s1, s1len + 1);
	else
	{
		ft_strlcpy(p, s1, s1len + 1);
		ft_strlcat(p, s2, s2len + s1len + 1);
	}
	return (p);
}	
