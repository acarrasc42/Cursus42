/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarrasc <acarrasc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:06:30 by acarrasc          #+#    #+#             */
/*   Updated: 2023/10/19 19:23:58 by acarrasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char buffer[100] = "hello testing bzero function";
	printf("display buffer string before ft bzero function: %s\n", buffer);
	ft_bzero(buffer, 100);
	printf("display buffer string after ft bzero function: %s\n, buffer);
	return (0);
*/
