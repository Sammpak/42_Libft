/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 11:12:37 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/13 11:04:35 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp_s;
	unsigned char	uc;
	size_t			i;

	tmp_s = (unsigned char *)s;
	uc = c;
	i = 0;
	while (i < n)
	{
		if (tmp_s[i] == uc)
			return (&tmp_s[i]);
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char s[] = {0, 1, 2 ,3 ,4 ,5};
// 	char *result;
// 	result = ft_memchr(s, 0, 0);s
// 	printf("result 1 : %p\n", (void *)result);
// 	result = ft_memchr(s, 0, 1);
// 	printf("result 2 : %p\n", (void *)result);
// 	result = ft_memchr(s, 2, 3);
// 	printf("result 3 : %p\n", (void *)result);
// 	result = ft_memchr(s, 6, 6);
// 	printf("result 4 : %p\n", (void *)result);
// 	result = ft_memchr(s, 2 + 256, 3);
// 	printf("result 5 : %p\n", (void *)result);
// }