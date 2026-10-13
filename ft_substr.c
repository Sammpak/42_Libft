/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:32:44 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/13 11:10:30 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	size_len;

	size_len = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (len > size_len - start)
		len = size_len - start;
	substr = malloc(sizeof(char) * (len) + 1);
	if (substr == NULL)
		return (NULL);
	s = s + start;
	i = 0;
	while (s[i] && i < len)
	{
		substr[i] = s[i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// int main()
// {
// 	char *s;
// 	int from;
// 	int during;

// 	s = "Geekssss";
// 	from = 3;
// 	during = 2;
// 	char *result = ft_substr(s, from, during);
// 	printf("\n Sub (%s) from (%d) during (%d) : (%s):Expected (eks)",
//		s, from, during, result);

// 	free(result);

// 	s = "Hello world";
// 	from = 0;
// 	during = 100;
// 	result = ft_substr(s, from, during);
// 	printf("\n Sub (%s) from (%d) during (%d) : (%s) Expected (Hello world)",
//		s, from, during, result);

// 	free(result);

// 	s = "Samuel";
// 	from = 3;
// 	during = 1;
// 	result = ft_substr(s, from, during);
// 	printf("\n Sub (%s) from (%d) during (%d) : Result (%s) :
// Expected (u)", s,
//		from, during, result);
// }