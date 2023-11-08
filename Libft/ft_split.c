/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarrasc <acarrasc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:24:37 by acarrasc          #+#    #+#             */
/*   Updated: 2023/10/17 16:27:12 by acarrasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_count_words(const char *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			words++;
			i++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words);
}

static int	ft_lenword(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static void	ft_free_memory(char **matrix, int index)
{
	while (index > 0)
	{
		free(matrix[index - 1]);
		index--;
	}
	free(matrix);
}

static char	**ft_get_word(char **matrix, char const **s, char c, int *n)
{
	int	len;

	len = ft_lenword(*s, c);
	matrix[*n] = (char *)ft_calloc(len + 1, sizeof(char));
	if (!matrix[*n])
	{
		ft_free_memory(matrix, *n);
		return (NULL);
	}
	ft_strlcpy(*(matrix + *n), *s, len + 1);
	(*n)++;
	*s = *s + len;
	return (matrix);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		n;

	if (!s)
		return (NULL);
	matrix = (char **)ft_calloc(ft_count_words(s, c) + 1, sizeof(char *));
	if (!matrix)
		return (NULL);
	n = 0;
	while (*s)
	{
		if (*s != c)
		{
			matrix = ft_get_word(matrix, &s, c, &n);
			if (!matrix)
				return (NULL);
		}
		else
			s++;
	}
	matrix[n] = NULL;
	return (matrix);
}
/*int	 main(void)
{
	char	**tabstr;
	int		i;

	i = 0;
	if (!(tabstr = ft_split("hello!", ' ')))
		printf("NULL");
	else
	{
		while (tabstr[i] != NULL)
		{
			printf("palabra %i: %s\n", i, tabstr[i]);
			i++;
		}
	}
}*/
