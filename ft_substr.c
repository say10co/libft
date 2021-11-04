/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:57:21 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/04 10:01:20 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
char *ft_substr(char const *s, unsigned int start,unsigned int len)
{
	char *substr;
	unsigned int	index;

	index = 0;
	substr = (char *)malloc(len * sizeof(char));	
	if (!substr)
			return (0);
	while (index < len)
	{
		substr[index] = s[start];
		start++;
		index++;
	}
	return (substr);
}
int main()
{
	char *str = "123456789";
	printf("%s\n", ft_substr(str, 1, 0));
	return 0;
}
