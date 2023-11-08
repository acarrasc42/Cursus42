/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarrasc <acarrasc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:36:14 by acarrasc          #+#    #+#             */
/*   Updated: 2023/10/02 11:23:12 by acarrasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	occur;

	i = ft_strlen(s);
	occur = 0;
	while (i >= 0 && !occur)
	{
		if (s[i] == (char)c)
			occur = 1;
		i--;
	}
	if (occur)
		return ((char *)(s + i + 1));
	else
		return (0);
}
