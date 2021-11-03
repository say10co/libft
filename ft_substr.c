#include <stdio.h>
#include <stdlib.h>
char *ft_substr(char const *s, unsigned int start,unsigned int len)
{
	char *substr;
	int	index;

	index = 0;
	substr = (char *)malloc(len * sizeof(char));	
	while (index < len)
	{
		substr[index] = s[start];
		start++;
		index++;
	}
	return (substr);
}
/*
int main()
{
	char *str = "123456789";
	printf("%s\n", ft_substr(str, 0, 9));
	return 0;
}
*/
