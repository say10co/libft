#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"
#include <unistd.h>
int main(void)
{
	//ft_memcmp()
	int arr[] = {1, 2, 3};
	int arr1[] = {1, 2, 3};
	ft_


	//ft_strstr() OK.	
	/*
	char str[] = "come for cum";
	printf("%s\n", ft_strnstr(str, "", 12));
	*/


	//ft_atoi() OK.
	/* 
	int num;
	num = ft_atoi("	    -12");
	printf("%d\n", num);
	*/
	
	//ft_strdup() OK. 
	/*
	char str[] = "1234567890";
	char *str_cpy;
	str_cpy = ft_strdup(str);
	int i = 0;
	while (str_cpy[i++])
	{
		write(1,&str_cpy[i], 1);
	}
	//printf("%s\n", str_cpy);
	*/

	
	//ft_calloc() OK.
	/* 
	int *arry;

	arry = (int	*)(ft_calloc(10, sizeof(int)));
	for (int i = 0; i < 10; i++)
		printf("%d\n", arry[i]);
	*/
	return (0);
}
