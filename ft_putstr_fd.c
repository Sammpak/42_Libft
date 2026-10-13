/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:30:40 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/13 13:00:36 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// int	dict_open(char *file, int __oflag)
// {
// 	int	fd;

// 	fd = open(file, __oflag);
// 	if (fd == -1)
// 		return (0);
// 	return (fd);
// }

// int	dict_close(int filedesc)
// {
// 	if (close(filedesc) == -1)
// 		return (0);
// 	return (1);
// }

// int main()
// {
// 	char *s;
// 	s = "hello world";
// 	int fd = dict_open("./test.txt", O_WRONLY);
// 	if (fd == 0)
// 	{
// 		printf("failed to open");
// 	}
// 	ft_putendl_fd(s,fd);
// 	dict_close(fd);
// 	if (dict_close(fd) == 0)
// 	{
// 		printf("failed to close");
// 	}
// }