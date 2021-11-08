/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:14:30 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/08 10:16:10 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_count_words(char *str, char c)
{
	int	nb_wds;

	nb_wds = 0;
	while (*str)
	{
		while (*str && c == *str)
			str++;
		if (*str)
			nb_wds++;
		while (*str && *str != c)
			str++;
	}
	return (nb_wds);
}

static int	len_word(char *str, char c)
{
	int	l;

	l = 0;
	while (*str && c != *str)
	{
		str++;
		l++;
	}
	return (l);
}

static char	*ft_copy_word(char *str, int size)
{
	int		t;
	char	*word;

	t = 0;
	word = (char *)malloc(sizeof(char) * (size + 1));
	if (!word)
		return (0);
	while (*str && t < size)
	{
		word[t] = *str;
		str++;
		t++;
	}
	word[t] = '\0';
	return (word);
}

char	**ft_split(char *str, char c)
{
	char	**result;
	int		nb_words;
	int		added_words;
	int		length;

	nb_words = ft_count_words(str, c);
	result = (char **)malloc(sizeof(char *) * (nb_words + 1));
	added_words = 0;
	if (!result || !str)
		return (NULL);
	while (*str && added_words < nb_words)
	{
		while (*str && c == *str)
			str++;
		if (*str)
		{
			length = len_word(str, c);
			result[added_words] = ft_copy_word(str, length);
			str += length;
			added_words++;
		}
	}
	result[added_words] = 0;
	return (result);
}
