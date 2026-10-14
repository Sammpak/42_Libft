/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 14:18:51 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/14 15:00:00 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_int_size(long nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
	{
		len++;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	long	nbr;

	nbr = n;
	len = get_int_size(nbr);
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (nbr == 0)
		s[0] = '0';
	if (nbr < 0)
	{
		s[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		len--;
		s[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int nbr;
// 	char *result;
// 	char *result_2;

// 	nbr = 2143;
// 	result = ft_itoa(nbr);
// 	printf("\n nbr (%d) is now (%s) as a string : Expected (143)", nbr, result);

// 	nbr = -2147483648;
// 	result_2 = ft_itoa(nbr);
// 	printf("\n nbr (%d) is now (%s) as a string : Expected (-2147483648)", nbr,
// 		result_2);
// }
