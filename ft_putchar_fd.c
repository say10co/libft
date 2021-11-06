#include <unistd.h>
//#include <fcntl.h>
void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int main()
{

	int fd = open("tdr.txt", O_WRONLY | O_APPEND);
	ft_putchar_fd('a', fd);
}
*/
