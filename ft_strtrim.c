/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:42:33 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/09 11:39:39 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	finde_edges(const char *s1, const char *set, int len, int direct)
{
	int		index_s1;
	int		index_set;
	int		flag;

	index_s1 = 0;
	if (direct < 0)
		index_s1 = len - 1;
	while (s1[index_s1] && index_s1 >= 0)
	{
		index_set = 0;
		flag = 1;
		while (set[index_set])
		{
			if (s1[index_s1] == set[index_set])
			{
				index_s1 += direct;
				flag = 0;
				break ;
			}
			index_set++;
		}
		if (flag)
			return (index_s1);
	}
	return (index_s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{	
	int		len_s1;
	int		start;
	int		end;
	char	*strimed;

	if (!s1 || !set)
		return (0);
	len_s1 = ft_strlen(s1);
	start = finde_edges(s1, set, 0, 1);
	end = finde_edges(s1, set, len_s1, -1);
	len_s1 = 0;
	if (end == -1)
		strimed = (char *)malloc((sizeof(char)));
	else
		strimed = (char *)malloc((end - start) * sizeof(char) + 2);
	if (!strimed)
		return (NULL);
	while (start <= end)
	{
		strimed[len_s1] = s1[start];
		start++;
		len_s1++;
	}
	strimed[len_s1] = '\0';
	return (strimed);
}
