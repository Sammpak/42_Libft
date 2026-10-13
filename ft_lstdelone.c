/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 14:18:38 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/13 13:22:50 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// void	test(void *lst)
// {
// 	free(lst);
// }

// int main()
// {
// 	char *str = "PLease delete me";

// 	t_list *firs_str = ft_lstnew(str);

// 	printf("\n Before delete %s ", (char * ) firs_str->content);
// 	ft_lstdelone(firs_str, test);
// 	printf("\n After delete %s ", (char *) firs_str->content);

// }