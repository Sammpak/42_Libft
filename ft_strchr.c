/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 10:33:57 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/13 11:08:02 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;
	char			*res;

	uc = (unsigned char)c;
	res = (char *)s;
	if (uc == '\0')
		return ((char *)(s + ft_strlen(s)));
	while (*res)
	{
		if (*res == uc)
			return (res);
		res++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main ()
// {
// 	char s[] = "tripouille";
// 	char *res;
// 	res = ft_strchr(s, 't');
// 	printf("result 1 : %s\n", res);
// 	res = ft_strchr(s, 'l');
// 	printf("result 2 : %s\n", res);
// 	res = ft_strchr(s, 'z');
// 	printf("result 3 : %s\n", res);
// 	res = ft_strchr(s, 0);
// 	printf("result 4 : %s\n", res);
// 	res = ft_strchr(s, 't' + 256);
// 	printf("result 5 : %s\n", res);
// }