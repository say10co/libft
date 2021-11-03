/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:51:05 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/03 21:27:58 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	unsigned char	*t_dst;
	unsigned char	*t_src;
	int				leader;

	t_dst = (unsigned char *)dst;
	t_src = (unsigned char *)src;

	leader = 1;
	if (t_dst > t_src)
	{
		t_src = t_src + len -1;
		t_dst = t_dst + len -1;
		leader = -1;
	}
	while (len--)
	{
		*t_dst = *t_src;
		t_src += leader;
		t_dst += leader;		
	}
	return (dst);
}


int main()
{
	char s1[] = "s1234567";
	
	char s2[] = "s1234567";
	printf("%s\n", ft_memmove(s1, s1+3, 4));
	printf("%s\n", memmove(s2, s2+3, 4));
	return 0;
}

