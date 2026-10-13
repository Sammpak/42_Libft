/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 11:33:27 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/13 11:05:28 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*temp_s1;
	unsigned char	*temp_s2;

	temp_s1 = (unsigned char *)s1;
	temp_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (temp_s1[i] != temp_s2[i])
			return (temp_s1[i] - temp_s2[i]);
		i++;
	}
	return (0);
}

// entre 0 et 255 donc unsigned char
// #include <stdio.h>

// int	main(void)
// {s
// char	aphrase[] = "aaaa";
// char	bphrase[] = "aaaa";
// char	cphrase[] = "abaa";
// char	dphrase[] = "aaac";

// int		result;
// int n;

// n = 10;
// result = ft_memcmp(aphrase,bphrase, n);
// printf("\n (%s) and (%s) with n(%d) : Result (%d) : Expected (0)",aphrase,
// 	bphrase, n, result);

// result = ft_memcmp(aphrase,cphrase, n);
// printf("\n(%s) and (%s) with n(%d) : Result (%d) : Expected (-1)",aphrase,
// 	cphrase, n, result);

// result = ft_memcmp(cphrase,aphrase, n);
// printf("\n(%s) and (%s) with n(%d) : Result (%d) : Expected (1)",cphrase,
// 	aphrase, n, result);

// n = 2;
// result = ft_memcmp(aphrase,dphrase, n);
// printf("\n(%s) and (%s) with n(%d) : Result (%d) : Expected (0)",aphrase,
// 	dphrase, n, result);
// 	char s2[] = {0, 0, 127, 0};
// 	char s3[] = {0, 0, 42, 0};

// 	int result = ft_memcmp(s2, s3, 4);
// 	printf("\nwith nbr : Result (%d) : Expected (-85)", result);

// 	return (0);
// }
