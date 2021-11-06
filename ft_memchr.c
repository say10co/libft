/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:49:15 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/06 18:00:14 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.hi"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	int				i;

	str = (unsigned char *) s;
	i = 0;
	while ((n--) && str)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (0);
}
