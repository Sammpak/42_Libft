/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 14:41:44 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/13 13:23:43 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_to_delete;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		next_to_delete = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = next_to_delete;
	}
}

// void	test(void *lst)
// {
// 	lst = NULL;
// }

// int main()
// {
// 	char str[] = "a";
// 	char str_2[] = "b";
// 	char str_3[] = "c";

// 	t_list *first_lst = ft_lstnew(str);
// 	t_list *second_lst = ft_lstnew(str_2);
// 	t_list *last_lst = ft_lstnew(str_3);

// 	ft_lstadd_back(&first_lst, second_lst);
// 	ft_lstadd_back(&second_lst, last_lst);

// 	printf("\n Before delete %s ", (char * ) first_lst->content);
// 	printf("\n Before delete %s ", (char * ) first_lst->next->content);
// 	printf("\n Before delete %s ", (char * ) first_lst->next->next->content);

// 	ft_lstclear(&second_lst, test);

// 	printf("\n Before delete %s ", (char * ) first_lst->content);
// 	printf("\n Before delete %s ", (char * ) first_lst->next->content);
// 	printf("\n Before delete %s ", (char * ) first_lst->next->next->content);

// 	return (0);
// }