/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarrasc <acarrasc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:54:15 by acarrasc          #+#    #+#             */
/*   Updated: 2023/10/12 10:36:32 by acarrasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)

{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
/*
int main
{
	char dst2[15];
	char dst[15];
	char src[15] = "alejandro carra";
	void *res;
	printf("%s\n", dst);
	res = ft_memcpy(dst, src, 50);
	printf("ft_memcpy: %s\n", dst);
    res = memcpy(dst2, src, 50);
	printf("original: %s\n", dst2);
	return(0);
}*/	
