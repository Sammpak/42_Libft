/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaccaud <spaccaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:34:52 by spaccaud          #+#    #+#             */
/*   Updated: 2026/10/13 15:07:55 by spaccaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char const *s, char c)
{
	int	word;
	int	i;

	word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] && s[i] != c)
				i++;
			word++;
		}
		else
			i++;
	}
	return (word);
}

int	free_all(char **result, int index)
{
	while (index > 0)
	{
		index--;
		free(result[index]);
	}
	free(result);
	return (0);
}

int	split_custom(char **result, char c, char const *s)
{
	int	i;
	int	index;
	int	from;

	i = 0;
	index = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			from = i;
			while (s[i] && s[i] != c)
				i++;
			result[index] = malloc(sizeof(char) * (i - from + 1));
			if (!result[index])
				return (free_all(result, index));
			ft_strlcpy(result[index], &s[from], i - from + 1);
			index++;
		}
		else
			i++;
	}
	result[index] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		nbrwrd;

	if (!s)
		return (NULL);
	nbrwrd = count_word(s, c);
	result = malloc(sizeof(char *) * (nbrwrd + 1));
	if (!result)
		return (NULL);
	if (nbrwrd == 0)
	{
		result[0] = NULL;
		return (result);
	}
	if (split_custom(result, c, s) == 0)
		return (NULL);
	return (result);
}

// int main()
// {

// 	char **result = ft_split("  tripouille  42  ", ' ');

// 	if (result)
// 	{
// 		char **tab = result;

// 		while (*tab)
// 		{
// 			printf("\n result : [%s]\n", *tab);
// 			tab++;
// 		}
// 	}
// }