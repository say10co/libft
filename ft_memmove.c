/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:51:05 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/03 19:33:46 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	unsigned char	*t_dst;
	unsigned char	*t_src;

	t_dst = (unsigned char *)dst;
	t_src = (unsigned char *)src;
	if (len)
	{
		ft_memmove(t_dst + 1, t_src + 1, len - 1);
		*t_dst = *t_src;
	}
	return (dst);
}
/*
int main()
{
	char s1[] = "s1234567";
	
	char s2[] = "s1234567";
	printf("%s\n", ft_memmove(s1+3, s1, 5));
	printf("%s\n", memmove(s2+3, s2, 5));
	return 0;
}
*/
