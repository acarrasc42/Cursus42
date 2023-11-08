/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarrasc <acarrasc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:41:52 by acarrasc          #+#    #+#             */
/*   Updated: 2023/09/26 09:49:10 by acarrasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)

{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*int main
{
int	c = 120;
printf("%d\n", ft_isascii(c));
return 0;
}*/
