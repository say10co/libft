#include <stdlib.h>
static void	*ft_memset(void *b, int c, unsigned int len)
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
void	*ft_calloc(unsigned int count, unsigned int size)
{
	void *mem;
	mem = malloc(count * size);
	if(!mem)
		return (0);
	return (ft_memset(mem, 0, count * size));
}
