/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 11:01:38 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/13 11:15:07 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	aphrase[] = "aaaa";
// 	char	bphrase[] = "aaaa";
// 	char	cphrase[] = "abaa";
// 	char	dphrase[] = "aaac";

// 	int		result;
// 	int n;

// 	n = 10;
// 	result = ft_strncmp(aphrase,bphrase, n);
// 	printf("\n Comparing (%s) and (%s) with n(%d) :(%d) : ex (0)",aphrase,
// 		bphrase, n, result);

// 	result = ft_strncmp(aphrase,cphrase, n);
// 	printf("\n Comparing (%s) and (%s) with n(%d) :(%d) : ex (-1)",aphrase,
// 		cphrase, n, result);

// 	result = ft_strncmp(cphrase,aphrase, n);
// 	printf("\n Comparing (%s) and (%s) with n(%d) :(%d) : ex (1)",cphrase,
// 		aphrase, n, result);

// 	n = 2;
// 	result = ft_strncmp(aphrase,dphrase, n);
// 	printf("\n Comparing (%s) and (%s) with n(%d) :(%d) : ex (0)",aphrase,
// 		dphrase, n, result);

// 	char	str2[] = "test";
// 	char	str1[] = "test";

// 	str1[3] = -43;
// 	str2[3] = -42;
// 	n = 10;
// 	result = ft_strncmp(str1,aphrase, n);
// 	printf("\n Result (%d)", result);
// 	printf("\n real result %d", strncmp(str1, aphrase, n));

// 	return (0);
// }
