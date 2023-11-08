/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarrasc <acarrasc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:45:46 by acarrasc          #+#    #+#             */
/*   Updated: 2023/09/14 16:53:21 by acarrasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isprint(int c)

{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*int	main()

{
	int c = '3';
	printf("%d\n", ft_isprint (c));
	return 0;	
}*/
