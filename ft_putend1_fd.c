#include <unistd.h>
#include <fcntl.h>
void ft_putend1_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] && ++i)
		write(fd, &s[i - 1], 1);
	write(fd,"\n", 1);
}
/*
int main()
{

	int fd = open("tdr.txt", O_WRONLY | O_APPEND);
	ft_putend1_fd("Hello World!", fd);
}
*/
