/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 10:26:27 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/13 15:19:22 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	comp;

	i = 0;
	comp = 0;
	if (*little == '\0')
		return ((char *)(big));
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[0])
		{
			while (big[i] == little[comp] && big[i] && little[comp] && i < len)
			{
				comp++;
				i++;
			}
			if (little[comp] == '\0')
				return ((char *)&big[i - comp]);
			i = i - comp;
			comp = 0;
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	char haystack[5] = "hello world";
// 	char needle[5] = "world";

// 	char *res = ft_strnstr(haystack, needle, 3);
// 	printf("\n result %s", res);

// 	// res = ft_strnstr(haystack, "a", -1);
// 	// printf("\n result %s", res);

// 	// res = ft_strnstr(haystack, "c", -1);
// 	// printf("\n result %s", res);

// 	// res = ft_strnstr(haystack, "bcab", 10);
// 	// printf("\n result %s", res);

// 	// res = ft_strnstr(haystack, "cd", 8);
// 	// printf("\n result %s", res);

// }
