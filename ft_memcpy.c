/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:59:37 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/03 15:53:25 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	int		i;
	char	*t_dest;
	char	*t_src;

	t_dest = (char *) dest;
	t_src = (char *) src;
	i = 0;
	while (n > 0)
	{
		t_dest[i] = t_src[i];
		i++;
		n--;
	}
	return (dest);
}
int main()
{

	char s[] = "abcdef";
	char *d = s + 2;

	printf("s => %s \n", s);
	printf("d => %s \n", d);
	memcpy(d, s, 3);
	
	printf("s => %s \n", s);
	printf("d => %s \n", d);
	return 0;
}
