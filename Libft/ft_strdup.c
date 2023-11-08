/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarrasc <acarrasc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:11:13 by acarrasc          #+#    #+#             */
/*   Updated: 2023/09/27 13:57:28 by acarrasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		slen;
	char	*copy;

	slen = ft_strlen(s);
	if (!s)
		return (NULL);
	copy = (char *)ft_calloc(slen + 1, sizeof(char));
	if (!copy)
		return (NULL);
	ft_strlcpy(copy, s, slen + 1 * sizeof(char));
	return (copy);
}
/*
int	main(void)
{
	char	source[] = "testforstrdup";

	char* target = ft_strdup(source);
	printf("%s\n", target);
	return (0);
}*/
