/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 15:24:48 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/13 14:08:22 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!f || !del || !lst)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// void	*test(void *value)
// {
// 	int		i;
// 	char	*str;

// 	str = ft_strdup((char *)value);
// 	i = 0;
// 	while (str[i])
// 	{
// 		str[i] = ft_toupper(str[i]);
// 		i++;
// 	}
// 	return (str);
// }

// void	test_delete(void *lst)
// {
// 	lst = NULL;
// }

// int	main(void)
// {
// 	char str[] = "hello";
// 	char str_2[] = "world";
// 	char str_3[] = "idiiii";

// 	t_list *first_lst = ft_lstnew(str);
// 	t_list *second_lst = ft_lstnew(str_2);
// 	t_list *last_lst = ft_lstnew(str_3);

// 	t_list *new_lst;

// 	ft_lstadd_back(&first_lst, second_lst);
// 	ft_lstadd_back(&first_lst, last_lst);

// 	printf("\n Before changing %s ", (char *)first_lst->content);
// 	printf("\n Before changing %s ", (char *)first_lst->next->content);
// 	printf("\n Before changing %s ", (char *)first_lst->next->next->content);

// 	new_lst = ft_lstmap(second_lst, test, test_delete);

// 	printf("\n Before changing %s ", (char *)new_lst->content);
// 	printf("\n Before changing %s ", (char *)new_lst->next->content);
// 	printf("\n Before changing %s ", (char *)new_lst->next->next->content);

// 	return (0);
// }
