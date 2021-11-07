/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:13:03 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/07 19:45:10 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)

{
	int	i;
	if (!s)
		return ;
	i = 0;
	while (s[i] && ++i)
		write(fd, &s[i - 1], 1);
	write(fd, "\n", 1);
}
