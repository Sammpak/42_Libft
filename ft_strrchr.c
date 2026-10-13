/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 12:40:09 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/13 15:12:02 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*temps_char;

	i = 0;
	if (c == '\0')
		return ((char *)(s + ft_strlen(s)));
	while (*s)
	{
		if (*s == (char)c)
		{
			temps_char = (char *)s;
			i++;
		}
		s++;
	}
	if (i > 0)
		return (temps_char);
	return (NULL);
}

// #include <stdio.h>

// int main()
// {

// 	char s[] = "Hello le monde, je suis Samuel ! 2";
// 	char s2[] = "Hello le monde, je suis Samuel !";
// 	char s3[] = "Hello le monde, je suis Samuel !";

// 	char *result;
// 	char c;

// 	c = 'm';
// 	result = ft_strrchr(s, c);
// 	printf("\n Testing (%c) : Result (%s) : ", c, result);

// 	c = 'S';
// 	result = ft_strrchr(s, c);
// 	printf("\n Testing (%c) : Result (%s) : Expected (Samuel !)", c,
// 		result);

// 	c = 's';
// 	result = ft_strrchr(s2, c);
// 	printf("\n Testing  (%c) : Result (%s) : Expected (suis Samuel !)", c,
// 		result);

// 	c = 'z';
// 	result = ft_strrchr(s3, c);
// 	printf("\n Testing (%c) : Result (%s) : Expected ((null))", c, result);
// }