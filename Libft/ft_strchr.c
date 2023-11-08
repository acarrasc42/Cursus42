/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarrasc <acarrasc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:58:05 by acarrasc          #+#    #+#             */
/*   Updated: 2023/09/21 18:52:10 by acarrasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	occur;

	i = 0;
	occur = 0;
	while (s[i] && !occur)
	{
		if (s[i] == (char)c)
			occur = 1;
		i++;
	}
	if (occur)
		return ((char *)(s + i - 1));
	else if (s[i] == (char)c)
		return ((char *)(s + i));
	else
		return (NULL);
}
