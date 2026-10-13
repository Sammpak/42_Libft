/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 13:16:29 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/13 10:53:34 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	long	res;
	int		sign;

	res = 0;
	sign = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = res * 10 + (*nptr - '0');
		nptr++;
	}
	return (sign * (int)res);
}

// #include <stdio.h>

// int main()
// {

// 	char s[] = "hello";
// 	char s2[] = "1";
// 	char s3[] = "-1";
// 	char s4[] = "2147483647";

// 	int result;
// 	result = ft_atoi(s);
// 	printf("\n Atoi with (%s) : Result in int (%d) : Expected (0)", s, result);

// 	result = ft_atoi(s2);
// 	printf("\n Atoi with (%s) : Result in int (%d) : Expected (1)", s2, result);

// 	result = ft_atoi(s3);
// 	printf("\n Atoi with (%s) : Result in int (%d) : Expected (-1)", s3,
//		result);

// 	result = ft_atoi(s4);
// 	printf("\n Atoi with (%s) : Result in int (%d) : Expected (2147483647)", s4,
//		result);
// }
