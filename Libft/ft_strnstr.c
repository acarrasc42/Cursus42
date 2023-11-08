/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarrasc <acarrasc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:25:55 by acarrasc          #+#    #+#             */
/*   Updated: 2023/09/25 14:40:58 by acarrasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		comparison;
	size_t	srclen;

	i = 0;
	comparison = 1;
	srclen = ft_strlen(little);
	if (srclen == 0)
		return ((char *)big);
	while (big[i] && (size_t)i < len && comparison)
	{
		if (big[i] == little[0])
		{
			if ((size_t)i + srclen - (size_t)1 < len)
				comparison = ft_strncmp(&big[i], little, srclen);
		}
		i++;
	}	
	if (!comparison)
		return ((char *)(big + i - 1));
	else
		return (NULL);
}	
