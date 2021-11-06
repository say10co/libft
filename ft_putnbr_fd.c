/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:48:13 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/05 11:51:02 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <fcntl.h>
void	ft_putnbr_fd(int n, int fd)
{
	char	t;

	if (n < 0)
	{
		write(fd, "-", 1);
		if (n == -2147483648)
			write(fd, "2147483647", 10);
		else
			n *= -1;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	t = (n % 10) + '0';
	write(fd, &t, 1);
}
/*
int main()
{
	int fd = open("tdr.txt", O_WRONLY | O_APPEND);
	ft_putnbr_fd(123, fd);
}
*/
