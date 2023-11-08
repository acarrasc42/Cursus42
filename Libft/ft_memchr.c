/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarrasc <acarrasc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 14:39:15 by acarrasc          #+#    #+#             */
/*   Updated: 2023/10/12 10:48:14 by acarrasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;
	int	occur;

	i = 0;
	occur = 0;
	if (n == 0)
		return (NULL);
	while (!occur && i < (int)n)
	{
		if (((char *)s)[i] == (char)c)
			occur = 1;
		i++;
	}
	i--;
	if (occur)
		return ((void *)(s + i));
	else if (((char *)s)[i] == (char)c)
		return ((void *)(s + i));
	else
		return (NULL);
}
/*
int	main(void)
{
	const void	*s = "ABCDEF";
	int c = 70;
	size_t	n = 6;
	char	*sn;

	sn = ft_memchr(s, c, n);
	printf("Result: %s\n", sn);
	return (0);
}*/
