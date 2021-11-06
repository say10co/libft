/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:09:42 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/04 19:15:30 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
void ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] && ++i)
		write(fd, &s[i - 1], 1);
}
/*
int main()
{

	int fd = open("tdr.txt", O_WRONLY | O_APPEND;
	ft_putstr_fd("Hello World!", fd);
}
*/
