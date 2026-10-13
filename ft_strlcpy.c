/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:16:53 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/13 11:09:27 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[30] = "Hello ";
// 	char	str_2[30] = "Hello ";
// 	char	str_3[30] = "Hello ";

// 	size_t	result;

// 	result = ft_strlcpy(str, "world", 30);
// 	printf("\n Testing with (Hello )
//		+ (world) : Result (%s) : Return (%zu) : Expected (world / 5)", str,
//		result);

// 	result = ft_strlcpy(str_2, "world", 2);
// 	printf("\n Testing with (Hello )
//		+ (world) : Result (%s) : Return (%zu) : Expected (world / 5)", str_2,
//		result);

// 	result = ft_strlcpy(str_3, "a", 9);
// 	printf("\n Testing with (Hello ) + (a),
//		size (9) : Result (%s) : Return (%zu) : Expected (a / 11)", str_3,
//		result);

// 	return (0);
// }
