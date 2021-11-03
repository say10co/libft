/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:31:39 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/03 16:33:26 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
typedef unsigned long	t_size;

void	*ft_memset(void *b, int c, t_size len)
{	
	unsigned char	*str;

	str = b;
	while (len > 0)
	{
		*str = (unsigned char)c;
		str++;
		len--;
	}
	return (b);
}
