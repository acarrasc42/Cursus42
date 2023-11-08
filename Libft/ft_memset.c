/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarrasc <acarrasc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:03:59 by acarrasc          #+#    #+#             */
/*   Updated: 2023/10/12 10:33:13 by acarrasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	void	*temp;

	i = 0;
	temp = b;
	while (i < len)
	{
	*(unsigned char *) b = (unsigned char) c;
		i++;
		b++;
	}
	return (temp);
}
/*int	main(void)
{
	char	str[50];
	char	*point;

	point = str;
	printf("la direccion de point antes es: %p\n", point);
	point = ft_memset(str, 65, 7);
	printf("%s\n", str);
	prinf("la direccion de point despues es: %p\n", point);
	return (0);
}*/
