/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarrasc <acarrasc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:36:14 by acarrasc          #+#    #+#             */
/*   Updated: 2023/10/12 10:48:28 by acarrasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;
	int	diff;

	i = 0;
	diff = 0;
	if ((int)n < 0)
		return (-1);
	while (!diff && i < (int)n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			diff = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
		i++;
	}
	if (diff)
		return (diff);
	else if (i == (int)n)
		return (0);
	else
		return (0);
}
/*
int	main(void)
{
	const void	*s1 = "ABZD";
	const void	*s2 = "ABX";
	int	sn;

	size_t	n = 3;
	sn = ft_memcmp(s1, s2, n);
	printf("Result: %d\n, sn);
	return (0);
}*/
